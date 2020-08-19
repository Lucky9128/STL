#include<iostream>
#include<vector>
#include<cstdio>

#define vvi vector<vector<long>>
#define vi vector<long>

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x

using namespace std;


void display(vvi arr)
{
    
    for(int i=0;i<arr.size();i++)
    {   
        for(int j=0;j<arr[0].size();j++)
        {
            cerr<<arr[i][j]<<"\t";       
        }
        cerr<<endl;
    }
    cerr<<endl;
}

void swap(vi &a1,vi &a2)
{
    vi temp = a1;
    a1 = a2;
    a2 = temp;
}

int partition(vvi &A, int low, int high, int ind)
{
    int pvt = A[high][ind];
    int i=low-1,j=high;

    for(int j=low;j<high;j++)
    {
        // cerr<<"p->low ->"<<j<<" high ->"<<high<<" pivot is->"<<pvt<<endl;
        if(A[j][ind]<pvt)
        {
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[high]);
    // cerr<<i+1<<endl;
    // display(A);
    return i+1;
}



void quick(vvi &vec, int low, int high, int ind)
{
    if(low<high)
    {
        // display(vec);
        int pivot = partition(vec,low,high,ind);
        // cerr<<"low ->"<<low<<" high ->"<<high<<" pivot is->"<<pivot<<endl;
        quick(vec,low,pivot-1,ind);
        quick(vec,pivot+1,high,ind);
    }
}

long CalSum(vvi &A, long val, int num)
{
    long sum=0;
    int i=0;
    while(i<num)
    {
        if(A[i][0]<val)
        {
            sum+= val - A[i][0];
            i++;
        }        
        else
        {
            break;
        }
    }
    A.erase(A.begin(),A.begin()+i);
    // cerr<<"After removing "<<val<<" extra sum "<<sum<<endl;
    // display(A);
    // cerr<<"--------------------------------------------------\n";
    return sum;
}

int main() {
    freopen("log.txt","w",stderr);
    int n=11,m=3;
    // cin>>n>>m;
    vvi A(11,{1});
    // vvi A = {{1,0},{8,0} ,{5,0}, {7,0} ,{100,0} ,{4,0} ,{52,0} ,{33,0}, {13,0} ,{5,0}};   
    vvi B = {{3,1000000000},{4,1000000000},{3,1000000000}};
    // for(int i=0;i<n;i++)
    // {
    //     int l;
    //     cin>>l;
    //     A.push_back({l,0});
    // }
    // for(int i=0;i<m;i++)
    // {
    //     int l,k;
    //     cin>>l>>k;
    //     B.push_back({l,k});
    // }
    quick(A,0,A.size()-1,0);
    quick(B,0,B.size()-1,1);
    display(A);
    cerr<<"-------------------------------------------------\n";
    display(B);
    long ttl=0;
    for(int i=0;i<n;i++)
    {
        ttl+=A[i][0];
    }
    
    cerr<<"Initial tlt ->"<<ttl<<endl;
    
    int cnt=0;
    int j = B.size()-1;   
    while(j>=0)
    {
        // long sum = CalSum(A,B[j][1],B[j][0]);
        // cerr<<sum+ttl<<endl;
        // if(ttl < sum + ttl)
        // {
        //     ttl = sum+ttl;
        //     cerr<<"new sum ->"<<ttl<<endl;
        // }

        long sum = 0;
        int i=0;
        while(i<B[j][0])
        {
            if(A[i][0]<B[j][1])
            {
                sum+= B[j][1] - A[i][0];
                i++;
            }        
            else
            {
                break;
            }
        }
        A.erase(A.begin(),A.begin()+i); 
        // cerr<<"Renaming arr\n";
        // display(A);
        if(ttl < sum + ttl)
        {
            ttl = sum+ttl;
            // cerr<<"new sum ->"<<ttl<<endl;
        }
        j--;
    }
    cout<<ttl<<endl;
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
