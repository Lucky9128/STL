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
    deque<int> myq;
    vector<int> myvec = {1,2,3,4,5,6};
    for(int i=0;i<10;i++)
    {
        myq.push_back(i);
        myq.push_front(i);
    }
    display(myq);
    display(myvec);
    return 1;
}