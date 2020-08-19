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
#define Norm(x) x>0?x:0
#define InRange(x,y,z)  (x<=z && x>=y)?1:0


using namespace std;

template<class T>
void display(T arr)
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

// void swap(vi &a1,vi &a2)
// {
//     vi temp = a1;
//     a1 = a2;
//     a2 = temp;
// }

int partition(vi &A, int low, int high)
{
    int pvt = A[high];
    int i=low-1,j=high;

    for(int j=low;j<high;j++)
    {
        // cerr<<"p->low ->"<<j<<" high ->"<<high<<" pivot is->"<<pvt<<endl;
        if(A[j]<pvt)
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



void quick(vi &vec, int low, int high)
{
    if(low<high)
    {
        // display(vec);
        int pivot = partition(vec,low,high);
        // cerr<<"low ->"<<low<<" high ->"<<high<<" pivot is->"<<pivot<<endl;
        quick(vec,low,pivot-1);
        quick(vec,pivot+1,high);
    }
}

int main()
{
    int n,k,p;
    cin>>n>>k>>p;
    vi cord = {10,3,8,16,12};
    vi order = cord;
    quick(order,0,order.size()-1);
    display(order);
    vvi qry = {{1,2},{1,3},{2,5}};
    int c=1;
    unordered_map<int,int> Ht;
    Ht[order[order[0]]]=c;
    cout<<Ht[order]
    for(int i=1;i<order.size();i++)
    {
        if(order[i]-order[i-1]>k)
        {
            c++;
        }
            Ht[order[i]]=c;
    }
    display(Ht);

    for(int i=0;i<qry.size();i++)
    {
        int ind1 = qry[i][0]-1;
        int ind2 = qry[i][1]-1;
        if(abs(cord[ind1]-cord[ind2]) <=k)
        {
            cout<<"Yes\n";
        }
        else
        {
            if(Ht[cord[ind1]]==Ht[cord[ind2]])
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
            
        }
        
    }



    return 0;
}
// int main()
// {
//     freopen("log.txt","w",stderr);

//     vvi arr;
//     ll tc;
//     cin>>tc;
//     while(tc--)
//     {
//         int n=5,k=3,p=3;
//         cin>>n>>k>>p;
//         // cout<<"ayr\n";
//         vvi cord(n,vi(2));
//         for(int i=0;i<n;i++)
//         {
//             cord[i][0]=i+1;
//             cin>>cord[i][1];
//         }
//         // cout<<"ayr\n";
//         vvi qry(p,vi(2));
//         for(int i=0;i<p;i++)
//         {
//             cin>>qry[i][0]>>qry[i][1];
//         }
//         vvi vec(n,vi(3));
//         quick(cord,0,cord.size()-1,1);
//         // display(cord);
//         // cout<<"ayr\n";
//         vec[0][0] = cord[0][0];
//         vec[0][1] = Norm(cord[0][1]-3);
//         vec[0][2] = cord[0][1]+3;

//         for(int i=1;i<cord.size();i++)
//         {
//             int myLeft = Norm(cord[i][1]-3);
//             int myRyt = cord[i][1]+3;

//             for(int j=0;j<i;j++)
//             {
//                 if(InRange(cord[i][1],vec[j][1],vec[j][2]))
//                 {
//                     myLeft = Min(myLeft,vec[j][1]);
//                     myRyt = Max(myRyt,vec[j][2]);
//                     vec[j][1] = myLeft;
//                     vec[j][2] = myRyt;
//                 }
                
//             }
//             vec[i][0] = cord[i][0];
//             vec[i][1] = myLeft;
//             vec[i][2] = myRyt;
//         }
//         quick(vec,0,vec.size()-1,0);
//         quick(cord,0,cord.size()-1,0);
//         // display(vec);
//         // display(cord);
//         for(int i=0;i<qry.size();i++)
//         {
//             if(InRange(cord[qry[i][1]-1][1],vec[qry[i][0]-1][1],vec[qry[i][0]-1][2]))
//             {
//                 cout<<"Yes\n";
//             }
//             else
//             {
//                 cout<<"No\n";
//             }
            
//         }
//     }

//     return 0;
// }

///////////////////////////to long//////////////////////////////////////
