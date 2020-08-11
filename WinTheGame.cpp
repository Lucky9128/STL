#include<iostream>
#include<vector>
using namespace std;


// vector<int> globalVertices;
// vector<int> visited;
// vector<vector<int>> vertices;
// struct node
// {
//     int child;
//     int root;
//     int val;
//     vector<struct node *> childNode;
// };


int P1(vector<int>, int);
int P2(vector<int>, int);


void display(vector<int> *vers)
{
    for(int i=0;i<vers->size();i++)
        cout<<"\t"<<vers->at(i);
    cout<<endl;
}
void display(vector<int> vers)
{
    for(int i=0;i<vers.size();i++)
        cout<<"\t"<<vers[i];
    cout<<endl;
}

int main()
{
    int max=8,dep=10;
    vector<int> arr;
    for(int i=0;i<max;i++)
    {
        arr.push_back(0);
    }
    cout<<"Size of vec : "<<arr.size()<<endl;
    
    for(int i=0;i<max;i++)
    {
        cout<<"str calling for ind "<<i<<endl;
        arr[i]=1;
        if(P2(arr,dep-i-1))
        {
            cout<<"win"<<endl;
            return 0;
        }
        arr[i]=0;
    }
    cout<<"fails"<<endl;
    
    return 0;
}


int P2(vector<int> arr, int dep)
{
    if(dep<=0)
        return 1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=1)
        {
            cout<<"P2 calling for ind "<<i<<" sum : "<<dep;
            display(arr);
            // int k;
            //cin>>k;
            arr[i]=1;
            if(!P1(arr,dep-i-1))
                return 0;
            arr[i]=0;
        }   
    }
    return 1;
}
int P1(vector<int> arr, int dep)
{
    if(dep<=0)
        return 0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=1)
        {
            cout<<"P1 calling for ind "<<i<<" sum : "<<dep;
            display(arr);
            int k;
            //cin>>k;
            arr[i]=1;
            if(P2(arr,dep-i-1))
                return 1;
            arr[i]=0;
        }   
    }
    return 0;
}











