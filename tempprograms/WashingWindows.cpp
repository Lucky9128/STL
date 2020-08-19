#include<bits/stdc++.h>

#define ll long long
#define vvi vector<vector<ll>>
#define vi vector<ll>

#define itr(i,a,b) for(int i=a;i<b;i++)
#define ittr(i,a) for(auto i=a.begin();i!=a.end();i++)

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x

using namespace std;

void display(unordered_map<int,vi> abc)
{
    itr(i,1,abc.size())
        cout<<abc[i][0]<<"\t"<<abc[i][1]<<endl;
}

void display(vector<vvi> vec)
{
    itr(i,0,vec.size())
    {
        itr(j,0,vec[i].size())
        {
            cout<<vec[i][j][0]<<"->"<<vec[i][j][1]<<"\t";
        }
        cout<<endl;
    }
}


int main()
{
    freopen("log.txt","w",stdout);

    

    // vvi vec =  {{5,6,7,8},{1,2,3,4},{9,10,11,12}};
    // vvi vec = {{8,1,7,4},{2,10,3,4},{12,5,11,6}};
    // vvi vec = {{1,6,8,4},{5,10,7,9},{12,2,11,3}};
    // vvi vec = {{3,6,9,12},{2,5,8,11},{1,4,7,10}};
    vvi vec = {{2,1,3}};
    int n=1,m=3;

    vi v3 = {0,0};
    vector<vi> v2(m,v3);
    vector<vvi> v1(n,v2);

    itr(j,0,vec[0].size())
    {
        v1[n-1][j][0]=1;
        v1[n-1][j][1]=inf;
    }

    cout<<"initialization done\n";

    itr(i,0,vec.size()-1)
    {
        itr(j,0,vec[i].size())
        {
            cout<<"On row :"<<i<<"\t col :"<<j<<endl;
            int l = n - i -1;
            int k =j;    
            cout<<"New row :"<<l<<"\t col :"<<k<<endl;
            if(v1[l][k][0]==0)
            {
                if(v1[l][k][1]<vec[i][j])
                {
                    v1[l][k][0]=1;
                    v1[l][k][1] = vec[i][j];
                }
            }
            else
            {
                v1[l][k][1]=vec[i][j];
            }
            cout<<"Cleaning check\n";
            int t = Max(k-1,0);
            int q = Min(k+1,m-1);
            cout<<"Modified col1:"<<t<<"\t col2 :"<<q<<endl;
            itr(r,t,q+1)
            {
                cout<<"At row:"<<l-1<<" col:"<<r<<" val : "<<v1[l-1][r][0]<<endl;
                if(v1[l-1][r][0])
                {
                    if(v1[l-1][r][1]<vec[i][j])
                    {
                        v1[l-1][r][0]=0;
                        v1[l][k][1]=vec[i][j];
                    }
                }
                else
                {
                    if(v1[l-1][r][1]<vec[i][j])
                    {
                        v1[l-1][r][1]=vec[i][j];
                    }
                }
            }
            display(v1);
            cout<<"update done\n";
        }
    }

    cout<<"n-1 rows  done\n";
    itr(j,0,vec[0].size())
    {
        if(v1[0][j][0]==0)
        {
            if(v1[0][j][1]<vec[n-1][j])
            {
                v1[0][j][0]=1;
                v1[0][j][1]=vec[n-1][j];
            }              
        }         
    }
    cout<<endl;

    cout<<"last row done\n";

    for(int i=vec.size()-1;i>=0;i--)
    {
        itr(j,0,vec[i].size())
        {
            if(v1[i][j][0])
            {
                cout<<"1";              
            }         
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
    



}