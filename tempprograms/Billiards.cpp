#include<iostream>
#include<vector>
#include<math.h>
#include<cstdio>
#define ll long long
#define vi vector<ll>

using namespace std;
#define M  1000000009
ll dp[1000001]{};
ll solve(ll x){
      //base case
      if(x<2){return 0;}
      if(x==2||x==3){return 1;}
      if(dp[x]!=0)
      {
          return dp[x];
          }
      return dp[x] = (solve(x-2)+solve(x-3))%M; 
}

vi vec;

ll my(ll num)
{
        if(num>=vec.size())
        {
            for(ll i = vec.size();i<=num;i++)
            {
                ll k = vec[i-2]+vec[i-3];
                k %= M;
                vec.push_back(k);
            }
            return vec[num];
        }
        else
        {
            return vec[num];
        }
        
    // ll x= vec[num];
    // cerr<<x<<endl;
    return vec[num];
}
int main()
{
    freopen("log.txt","w",stderr);
    // int tc;
    // cin>>tc;
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1);
    // while(tc--)
    // {
        for(ll i=1;i<332;i++)
        {
            ll ab = solve(i);
            ll ab2 = my(i);

            if(ab != ab2)
            {
                cerr<<ab<<"\t"<<ab2<<endl;
            }
        }
        // long num=9;
        // // cin>>num;
        // vi vec(num+1,0);
        // vec[2]=1;
        // vec[3]=1;
        // for(int i=4;i<=num;i++)
        // {
        //     vec[i] += vec[i-2];
        //     vec[i] += vec[i-3];
        // }
        // cout<<vec[num]<<endl;
    // }

    return 0;
}