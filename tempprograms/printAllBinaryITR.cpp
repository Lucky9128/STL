#include<iostream>
#include<list>
#include<math.h>

using namespace std;


string GetBinary(int k, int size)
{
    list<char> str;
    while(k>0)
    {
        if(k&1==1)
            str.push_front('1');
        else
            str.push_front('0');
        k>>=1;
    }
    while(str.size() != size)
        str.push_front('0');
    string s(str.begin(),str.end());
    return s;
}

int main()
{
    int k = 5;
    int l1 =0;
    for(int i=0;i<pow(2,k);i++)
    {
        cout<<l1<<"\t"<<GetBinary(l1,5+1)<<endl;
        l1++;
    }
    return 0;
}