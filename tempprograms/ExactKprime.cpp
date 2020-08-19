#include<iostream>
#include<vector>
#include<cstdio>
#include<math.h>
#include<iomanip>
#include<time.h>
#define ll int
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define M 100001
using namespace std;

vi prime(M,1);
void display(vi vec)
{
    for(ll i=0;i<vec.size();i++)
    {
        cerr<<i<<"->"<<vec[i]<<"\n";       
    }
    cerr<<endl;
}

void display(vvi arr)
{
    for(ll i=0;i<101;i++)
    {
        cerr<<setw(3)<<i<<"\t";
    }
    cerr<<"\n";
    for(ll i=0;i<arr.size();i++)
    {   
        for(ll j=0;j<arr[0].size();j++)
        {
            cerr<<setw(3)<<arr[i][j]<<"\t";       
        }
        cerr<<endl;
    }
    cerr<<endl;
}

int isPrime(ll num)
{
    ll temp = floor(sqrt(num));
    for(ll i=2;i<=temp;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int factCnt(ll temp)
{

    ll cnt=0;
    ll j=2;
    while(temp>1)
    {
        // cerr<<"temp val :"<<temp<<endl;
        if(prime[j] && temp%j==0)
        {
            cnt++;
            temp/=j;
            while(temp%j==0)
                temp/=j;
            // cerr<<"temp val in :"<<temp<<endl;
        }
        // cerr<<"cnt : "<<cnt<<endl;
        j++;
    }
    return cnt;
}
int main()
{
    freopen("log.txt","w",stderr);
    ll last = 3;
    vi vec;
    // vec.push_back(0);
    // vec.push_back(0);
    vvi dp(6,vec);

    dp[0].push_back(0);
    dp[0].push_back(0);
    dp[0].push_back(0);
    dp[0].push_back(0);

    dp[1].push_back(0);
    dp[1].push_back(0);
    dp[1].push_back(1);
    dp[1].push_back(2);
    
    dp[2].push_back(0);
    dp[2].push_back(0);
    dp[2].push_back(0);
    dp[2].push_back(0);

    dp[3].push_back(0);
    dp[3].push_back(0);
    dp[3].push_back(0);
    dp[3].push_back(0);

    dp[4].push_back(0);
    dp[4].push_back(0);
    dp[4].push_back(0);
    dp[4].push_back(0);

    dp[5].push_back(0);
    dp[5].push_back(0);
    dp[5].push_back(0);
    dp[5].push_back(0);

    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);

    ll dpnum[6];
    // dpnum[0]=2;
    dpnum[1]=2;
    dpnum[2]=0;
    dpnum[3]=0;
    dpnum[4]=0;
    dpnum[5]=0;

    display(dp);

    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        // cerr<<"last ="<<last<<" b->"<<b<<endl;
        if(last<b)
        {
            // cout<<"called\n";
            for(ll i=last+1;i<=b;i++)
            {
                // cerr<<"for i ="<<i<<endl;
                prime[i] = isPrime(i);
                // cerr<<"is prime : "<<prime[i]<<endl;
                if(prime[i])
                {
                    dpnum[1]++;
                }
                else
                {                 
                    dpnum[factCnt(i)]++;
                }
                dp[0].push_back(0);
                dp[1].push_back(dpnum[1]);
                dp[2].push_back(dpnum[2]);
                dp[3].push_back(dpnum[3]);
                dp[4].push_back(dpnum[4]);
                dp[5].push_back(dpnum[5]);   
            }
            last = b;
            display(dp);
        }
        ll diff = dp[k][b]-dp[k][a];
        if(factCnt(a)==k)
        {

        cout<<diff+1<<endl;
        }
        else
        {
        cout<<diff<<endl;
            
        }
        
    }
    return 0;
}
