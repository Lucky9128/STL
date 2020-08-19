#include<iostream>
#include<list>
#include<vector>
#include<math.h>

using namespace std;

void display(list<list<int>> vec)
{
    int num=1;
    for(auto i=vec.begin();i!=vec.end();i++)
    {
        cout<<"Set->"<<num++<<"  {";
        auto j = i->begin();
        for(;j!=--i->end();j++)
            cout<<*j<<",";
        cout<<*j<<"}"<<endl;
    }
}

void display(list<int>vec)
{
    for(auto i=vec.begin();i!=vec.end();i++)
    {
        cout<<*i<<"\t";
    }
    cout<<endl;
}

list<list<int>> GetSubSet(list<int> myset, int len, list<int> stack)
{
    list<list<int>> subset;
    list<list<int>> temp;

    if(len<1)
    {
        if(stack.size()!=0)
        subset.push_back(stack); 
        return subset;
    }

    else if(len == myset.size())
    {
        stack.splice(stack.end(),myset);
        subset.push_back(stack);
        return subset;
    }
    else if(len<myset.size())
    {

        int k = myset.front();
        myset.pop_front();
        //cou<<"Calling without "<<k<<endl;
        temp = GetSubSet(myset,len,stack);
        //cou<<"subset return \n";
        // display(temp);
        subset.splice(subset.end(),temp);
        stack.push_back(k);
        //cou<<"Calling with "<<k<<endl;
        temp = GetSubSet(myset,len-1,stack); 
        subset.splice(subset.end(),temp);
        return subset;
    }
    return subset;
}

list<list<int>> Subset(list<int> myset)
{
    list<int> stack;
    list<list<int>> temp;
    temp.push_back({});
    // display(temp);
    for(int i=1;i<=myset.size();i++)
    {
        list<list<int>> temp2 = GetSubSet(myset,i,stack);
        temp.splice(temp.end(),temp2);
        // cout<<"Subsets fro len "<<i<<" is "<<endl;
        // display(temp);
    }
    return temp;
}

int main()
{
    list<int> myset ={4,5,6,7,8};
    list<int> myset2;
    list<int> myset3 ={10,20,300};
    list<int> myset4;

    // myset.splice(myset.end(),myset2);
    // myset4.splice(myset4.end(),myset3);
    // display(myset);
    // display(myset4);

    // return 1;
    list<list<int>> mySubset;
//     mySubset.push_front(myset);
//     mySubset.push_front(myset);
//     mySubset.push_front(myset);
//     mySubset.push_front(myset);
// display(mySubset);
// return 1;
    mySubset = Subset(myset);
    display(mySubset);
    return 1;
}
