#include<iostream>
#include<vector>
#define debug 1
using namespace std;

//calculate the number of possible formation of a string 

// int lengt;
int fact(int num)
{
    if(num==1)
        return 1;
    return fact(num-1)*num;
}
void display(vector<int> a)
{
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"\t";
    cout<<"\n";
}
int calCost(vector<int> vec,int lengt)
{
    int temp = fact(lengt);
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]>1)
            temp/=fact(vec[i]);
    }
    return temp;
}

int rec(vector<int> vec, int len, int remSum, int pos, vector<int> &vec2, int Curlen)
{
    if(debug)
        cout<<"Len is "<<len<<" remSum : "<<remSum<<" pos : "<<pos<<" Curlen : "<<Curlen<<endl;
    int sum=0;
    if(len > remSum)
    {
        if(debug)
            cout<<"Length is too large"<<endl;
            return 0;
    }
    else
    {
        for(int i=vec[pos];i>=0;i--)
        {
            if(debug)
            cout<<"At "<<pos<<" look : "<<i<<endl;
            if(len - i > 0)
            {
                vec2[pos] = i;
                sum+=rec(vec,len-i,remSum-vec[pos],pos+1,vec2,Curlen);
                vec2[pos] = 0;
                if(debug)
                    cout<<"Sum at "<<pos<<" is "<<sum<<" alpha included times : "<<i<<endl;
            }
            else if(len -i == 0)
            {
                vec2[pos]=i;
                sum+=calCost(vec2,Curlen);
                vec2[pos] = 0;
                if(debug)
                    cout<<"Sum at "<<pos<<" is "<<sum<<" alpha included times : "<<i<<" No further rec"<<endl;
            }
            
        }
    }
    return sum;
}

int main()
{
    string tiles = "AAABBC";
    vector<int> Hex(26);
    fill(Hex.begin(),Hex.end(),0);
    for(int i=0;i<tiles.length();i++)
    {
        Hex[tiles[i]%'A']++;
    }
    vector<int> val;
    int alphsum=0;
    for(int i=0;i<26;i++)
    {
        if(Hex[i]>0)
        {
            val.push_back(Hex[i]);
            alphsum+=Hex[i];
        }
    }
    display(val);
    int sum=0;
    cout<<alphsum<<endl;
    for(int i=1;i<=tiles.length();i++)
    {
        vector<int> res(val.size());
        fill(res.begin(),res.end(),0);
        sum += rec(val,i,alphsum,0,res,i);
    }
    cout<<sum<<endl;
    return 0;
}