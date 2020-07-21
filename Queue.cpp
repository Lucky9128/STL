#include<iostream>
#include<deque>
#include<vector>

//double ended queue:
//operations : enq_front, enq_back, deq_front, deq_back, and empty

using namespace std;

/*
push_back
push_front
pop_back
pop_front
size, max_size, resize, shrink_to_fit
begin, rbegin, cbegin, crbegin
end, rend, cend, crend
clear,
at, front, back, erase
insert
operator=, operator[]

*/
//need to know difference in emplace and insert

//erase: remove an element in queue
//erase(iterator itr)
//erase(iterator strt, iterator end)

//allocator allocats memory and deallocate:

template < class data>
void display(data abc)
{
    for(int i=0;i<abc.size();i++)
    {
        cout<<abc[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    deque<int> myq,myq2;
    for(int i=0;i<10;i++)
    {
        myq.push_back(i);
        myq.push_front(i);
    }
    display(myq);
    myq.resize(10);
    display(myq);
    myq.insert(myq.begin()+2,15);
    display(myq);
    myq2.assign(myq.begin(),myq.end()-2);
    display(myq2);
    myq2.erase(myq2.begin(),myq2.end()-5);
    display(myq2);
    return 1;
}