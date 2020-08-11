#include<iostream>
using namespace std;

//this logic didn't work in leetcode

int main()
{
    for(int i=1;i<=10;i++)
    {
        int temp = i*(i+1)/2;
        for(int j=1;j<=temp;j++)
        {
            
            if(j%(i+1)!=0 || j<=i)
                cout<<"With max: "<<i<<" sum : "<<j<<" win\n";
            else
                cout<<"With max: "<<i<<" sum : "<<j<<" fails\n";
        }
        cout<<"---------------------------------------------------------\n";
    }
    return 1;
}