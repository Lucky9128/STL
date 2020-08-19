#include<bits/stdc++.h>

#define ll long long
#define vvi vector<vector<ll>>
#define vi vector<ll>

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x

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