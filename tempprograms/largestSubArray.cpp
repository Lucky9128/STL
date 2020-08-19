//https://www.geeksforgeeks.org/largest-subarray-with-equal-number-of-0s-and-1s/

#include<iostream>
#include<vector>
#include<cstdio>
#include<unordered_map>

#define ll long long
#define vvi vector<vector<ll>>
#define vi vector<ll>

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x

using namespace std;

void display(vi vec)
{
    for(ll i=0;i<vec.size();i++)
    {
        cerr<<vec[i]<<"\t";       
    }
    cerr<<endl;
}

int GetCount(vi arr, int low, int high)
{
    if(high-low>1)
    {
        int cnt=0;
        for(int i=low;i<=high;i++)
        {
            if(arr[i]==0)
                cnt--;
            else
                cnt++;
        }
        int k1 = GetCount(arr,low+1,high);
        int k2 = GetCount(arr,low,high-1);
        k1 = Max(k1,k2);
        // cout<<"cnt : "<<cnt<<" ";
        if(cnt==0)
            k1 = Max(k1,high-low+1);
        // cout<<"low : "<<low<<" high : "<<high<<" Ret :"<<k1<<endl;
        return k1;
    }
    else
    {
        if(arr[low]+arr[high]!=1)
        {
            // cout<<"low : "<<low<<" high : "<<high<<" Ret :"<<0<<endl;
            return 0;
        }
        else
        {
            // cout<<"low : "<<low<<" high : "<<high<<" Ret :"<<high-low+1<<endl;
            return high-low+1;
        }
    }
    
}

int main()
{
    // vi  arr = {1,0,1,1,1,0,0};
    vi arr = {1, 0, 1, 1, 1, 0, 0};
    vi arr2;
    int cnt=0;
    // cout<<GetCount(arr,0,arr.size()-1)<<endl;


    vi sum(arr.size(),-1);
    unordered_map<int,int> myHash;
    int myMax=-1,last=-1;



    for(int i=0;i<arr.size();i++)
        arr[i] = (arr[i]==0)?-1:1;
    int l;
    // cout<<"1\n";
    for (int i = 0; i <arr.size(); i++) 
    { 
        // cout<<"i"<<i<<endl;
        // cin>>l;
        cnt+= arr[i];
        if(cnt==0)
        {
            myMax = i+1;
            last = i;
        }

        // cout<<"cnt->"<<cnt<<endl;
//        cin>>l;
        if(myHash.find(cnt+arr.size())!=myHash.end())
        {
            if(myMax < i - myHash[cnt + arr.size()])
            {
                myMax = i +myHash[cnt + arr.size()];
                last=i;
            }
        }
        else
        {
            myHash[cnt + arr.size()];
        }      
    }


    for (int i = 0; i < arr.size(); i++) 
        arr[i] = (arr[i] == -1) ? 0 : 1; 
        
    for(int i=last-myMax+1;i<=last;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;

    return 0;
}