#include<iostream>
#include<vector>
#include<math.h>
#include<cstdio>
using namespace std;

int CalBin(int num)
{
    int x = log2(num);
    return x+1;
}

int BinaryConcatenation(int x, int y)
{
    int k1 = CalBin(y);
    // cerr<<"bit in "<<y<<" is "<<k1<<endl;
    int k2 = CalBin(x);
    // cerr<<"bit in "<<x<<" is "<<k2<<endl;
    int t1 = x<<k1;
    int t2 = y<<k2;
    // cerr<<(t1<<k1)<<"\t"<<y<<endl;
    t1 += y;
    // cerr<<"t1 "<<t1<<endl;
    t2 += x;
    // cerr<<"t2 "<<t2<<endl;
    return abs(t1-t2);
}

int main()
{
    // freopen("log.txt","w",stderr);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
        int num = 2;
        // cin>>num;
        vector<int> vec = {6,8};
        // for(int i =0;i<num;i++)
        // {
        //     int k;
        //     cin>>k;
        //     vec.push_back(k);
        // }
        int max=-1;
        for(int i=0;i<num;i++)
        {
            for(int j=i;j<num;j++)
            {
                if(j!=i)
                {
                    // cerr<<"For "<<vec[i]<<" and "<<vec[j]<<endl;
                    int temp =  BinaryConcatenation(vec[i],vec[j]);
                    if(max < temp)
                    {
                        max = temp;
                    }
                }
            }
        }
        cout<<max<<endl;
        
    // }
    return 0;
}