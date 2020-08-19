#include<iostream>
#include<vector>
#include<cstdio>

#include<unordered_map>

#define ll long long
#define MOD 10000000007
#define vvi vector<vector<ll>>
#define vi vector<ll>

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x
using namespace std;


void display(vvi arr)
{
    
    for(ll i=0;i<arr.size();i++)
    {   
        for(ll j=0;j<arr[0].size();j++)
        {
            cerr<<arr[i][j]<<"\t";       
        }
        cerr<<endl;
    }
    cerr<<endl;
}
void display(vi vec)
{
    for(ll i=0;i<vec.size();i++)
    {
        cerr<<vec[i]<<"\t";       
    }
    cerr<<endl;
}

int  main()
{
    vi vec = {2,2,3,3,5};
    int k=3;
    unordered_map<int,int> abc;
    for(auto i:vec)
    {
        abc[i]+=1;
    }
    vi vec2;
    for(auto i:abc)
    {
        vec2.push_back(i.second);
    }
    display(vec2);
    // k = Min(k,abc.size());
    int cnt = abc.size();
    vvi arr(cnt+1,vi(k+1,0));
    display(arr);
    for(int i=0;i<=cnt;i++)
        arr[i][0]=1;
    arr[1][1] =  vec2[0];   
    for(int i=2;i<=cnt;i++)
    {
        for(int j=1;j<=k;j++)
        {
            arr[i][j] = (arr[i-1][j] + (arr[i-1][j-1]*vec2[i-1])%MOD)%MOD;
        }
    }
    display(arr);
    return 0;
}