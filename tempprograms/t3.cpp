#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll int
#define vvi vector<vector<ll>>
#define vi vector<ll>


using namespace std;

void display(vi arr)
{
    
    for(ll i=0;i<arr.size();i++)
    {   
        // for(ll j=0;j<arr[0].size();j++)
        // {
            cerr<<arr[i]<<"\t";       
        // }
        // cerr<<endl;
    }
    cerr<<endl;
}

int Val(int x)
{
    if(x==2)
    {
        return 1;
    }
    else if(x==3)
    {
        return 2;
    }
    else if(x%2==0)
    {
        return 1 + Val(x/2)*2; 
    }
    else
    {
        return 1 + Val(x/2) + Val(x/2+1);
    }
}


int main() {
vector<int> numbers = {2,5,4,8,3};
 vector<vector<int>> queries = {{2,5,2,4}};
vector<int> res;

    for(int i=0;i<(int)queries.size();i++)
    {
        int strt = queries[i][0]-1;
        int end  = queries[i][1]-1;
        int mid = strt+1;
        int len2  = queries[i][2];
        int p = numbers[strt];
        for(int j=strt+1;j<end;j++)
        {
            p = p&numbers[j];
            if(p==0)
                break;
        }
        // cout<<strt<<"\t"<<end<<"\t"<<p<<endl;
         int cnt=0;
        
        for(int j=strt;j<(int)numbers.size()-len2+1;j++)
        {

            int last = j + len2-1;
            int p = numbers[last--];

            while(last>=j && last<(int)numbers.size())
                p&=numbers[last--];
            if(p>=queries[i][3])
                cnt++;
        }
        // cout<<cnt<<endl;
        res.push_back(cnt);
    }
    display(res);


//     int n,x;
//     cin>>n>>x;
//     int cnt=0;
//    while(n>3)
//    {
//        if(n%2==0)
//        {
//            cnt+=1;
//            n/=2;
//        }
//        else
//        {
//            cnt+=1;
//            n = n/2+1;
//        }
//    }
//     if(n==3)
//     {
//         cnt+=2;
//     }
//     else
//         cnt+=1;
//     cout<<cnt<<endl<<2*x<<endl;
//     if(2*x >= cnt)
//         cout<<"1\n";
//     else
//         cout<<"0\n";

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}