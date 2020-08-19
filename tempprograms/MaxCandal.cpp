#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int row,col,X,Y;
        cin>>row>>col>>X>>Y;
        if(col==1 &&row ==1)
        {
            cout<<X<<endl;
            continue;
        }
        if(X>Y)
            X=Y;
        int diff = Y-X;
        if(diff > X)
            diff = X;
        int sum = X + diff;
        int r1=row*col;
        if(r1%2==0)
            cout<<sum*(r1/2)<<endl;
        else
            cout<<sum*(r1/2)+X<<endl;
    }
    return 0;
}