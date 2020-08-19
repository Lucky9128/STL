#include<iostream>
#include<vector>
#include<math.h>
#include<cstdio>

#define vvi vector<vector<int>>
#define ll long long
#define vi vector<ll>

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x

using namespace std;

// void display(vi vec)
// {
//     for(int i=0;i<vec.size();i++)
//     {
//         cerr<<vec[i]<<"\t";       
//     }
//     cerr<<endl;
// }

// void display(vvi arr)
// {
    
//     for(int i=0;i<arr.size();i++)
//     {   
//         for(int j=0;j<arr[0].size();j++)
//         {
//             cerr<<arr[i][j]<<"\t";       
//         }
//         cerr<<endl;
//     }
//     cerr<<endl;
// }



int main()
{

    freopen("log.txt","w",stderr);

    vi vec = {1,4,2,3};
    ll cnt=1;
    ll sum = vec.size();
    for(ll i=1;i<vec.size();i++)
    {
        if(vec[i-1]<=vec[i])
            cnt++;  
        else
        {
            cerr<<"Sum at "<<i<<" is "<<cnt<<endl;
            sum += ((cnt*(cnt-1))/2);
            cnt=1;
        }
        
    }
    sum += ((cnt*(cnt-1))/2);
    cout<<sum<<endl;
    return 0;
}