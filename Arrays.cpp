#include<iostream>
#include<array>

using namespace std;


int main()
{
    const int lent =5;
    array<int,lent> myarr  = {1,2,3};

    // for(int i=1;i<=lent;i++)
    //     myarr.fill(i);


    cout << "My array : \n";

    // for(int i=0;i<10;i++)
    //     cout<<i<<endl;

    //output = 5 4 6 1 2
    array<int ,5>::iterator ib = myarr.begin();
    for(auto i=myarr.begin();i != myarr.end(); ++i)
    {
        cout<<*i<<"\t";
    }
    cout<<endl;
    //output = 2 1 6 4 5
    for(auto i=myarr.rbegin();i != myarr.rend(); ++i)
    {
        cout<<*i<<"\t";
    }
    cout<<"\n";


    //distance is iterator method to get the distance between two iterators 
    //but it didn't work with reverse iterator as it will show error in the below commented line
    for(auto i=myarr.begin();i != myarr.end(); ++i)
    {
        cout<<"Distance : "<<*i<<"->"<<distance(ib,i)<<"\t";
    }
    cout<<endl;
    //output = 2 1 6 4 5
    for(auto i=myarr.rbegin();i != myarr.rend(); ++i)
    {
        // cout<<*i<<"\t"<<distance(ib,i)<"|";
    }
    cout<<"\n";


    //prev and next function of iterator gives the iterator prev and next to passed 
    // iterator 
    for(auto i=myarr.begin();i != myarr.end(); ++i)
    {
        if(distance(ib,i)>=1)
        {
            auto j = prev(i);
            cout<<"Prev: "<<*i<<"->"<<*j<<"\n";
        }
        if(distance(ib,i)<lent-1)
        {
            auto j = next(i);
            cout<<"Next: "<<*i<<"->"<<*j<<"\n";
        }
    }
    cout<<endl;
    
    //const_iterator function same as iterator but it won't allow us to update the values

    auto cit = myarr.cbegin();
    auto it = myarr.begin();
    // *cit = *cit+1;   //this is error 
    cout<<"Before -> "<<*it<<endl;
    *it = *it+1; 
    cout<<"After -> "<<*it<<endl;
    cout<<"size->"<<myarr.size()<<endl;
    cout<<"maxsize->"<<myarr.max_size()<<endl;
    //didn't found any difference in max_size and size 

    cout<<sizeof(myarr)<<endl;
    return 0;
}