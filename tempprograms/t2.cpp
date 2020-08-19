#include<bits/stdc++.h>

#define ll long long
#define vvi vector<vector<ll>>
#define vi vector<ll>

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x

using namespace std;


//find xor for the given indices in the array
void display(vi vec)
{
    for(ll i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";       
    }
    cout<<endl;
}

void display(vvi arr)
{
    
    for(ll i=0;i<arr.size();i++)
    {   
        for(ll j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j]<<"\t";       
        }
        cout<<endl;
    }
    cout<<endl;
}

int isMy(char a,char b,int k)
{
    if(abs(a-b)<=k)
        return 1;
    else
        return 0;
}

int SumOfDigits(int k)
{
    int sum=0;
    while(k>0)
    {
        sum += k%10;
        k/=10;
    }
    return sum;
}

int main()
{
    string s1 = "akramkeeanany",s2="aka";
    vi alpha(26,0);
    int j=0,flg=1;
    for(int i=0;i<s1.length();i++)
    {   
        if(flg)
        if(s1[i]==s2[j])
        {
            j++;
            if(j==s2.length())
                flg=0;
        }
        else
        {
            alpha[s1[i]%'a']+=1;
        }
        else
        {
            alpha[s1[i]%'a']+=1;
        }
    }
    char fin[s1.length()];
    int k = s2[0]%'a';
    display(alpha);
    int t=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<alpha[i];j++)
            fin[t++]=char(int('a')+i);
    }
    for(int i=0;i<s2.length();i++)
        fin[t++] = s2[i];
    for(int i=k;i<26;i++)
    {
        for(int j=0;j<alpha[i];j++)
            fin[t++]=char(int('a')+i);
    }
    cout<<fin<<endl;
    return 0;
}