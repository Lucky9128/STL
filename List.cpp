#include<iostream>
#include<list>

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
operator=
*/

//new func in list
/*
merge(list& x)
splice , remove, remove_if, reverse, sort, swap
operator[] is not applicable
*/
//remove function remove all the occurene of element
//remove_if(Predicator prep)


void display(list<int> abc)
{
    for(list<int>::iterator i=abc.begin();i!=abc.end();i++)
    {
        cout<<*i<<"\t";
    }
    cout<<endl;
}

//my own comparater fucntion for sort function
bool cmp(const int &a,const int &b)
{
    if(a>b)
        return true;
    else
        return false;    
}
//My own predicator for removing element
bool prep(int val)
{
    if(val<50)
        return true;
    else
        return false;
}
int main()
{
    list<int> lst;
    list<int> lst2;
    for(int i=0;i<10;i++)
    {
        lst.push_back(10-i);
        lst2.push_back(100+i);
    }
    // display(lst);
    // display(lst2);
    //this will make the lst2 empty
    // lst.merge(lst2,cmp);
    // lst.sort();
    // display(lst);
    // lst.sort(cmp);
    // display(lst);

    // lst.push_back(9);
    // display(lst);
    // lst.remove_if(prep);
    // display(lst);
    // lst.reverse();
    // display(lst);

    list<int> lst4 = {1,2,3,4,5,6,7,8,9};
    list<int> lst5 = {1,2,3,4,5,6,7,8,9};
    // lst.swap(lst4);
    // display(lst);
    // display(lst4);
    //this will remove all the elements from lst4
    // void splice(iterator it, list &lst)
    lst.splice(++lst.begin(),lst4);
    display(lst);
    // void splice(iterator it, list &lst, iterator first)
    lst.splice(lst.begin(),lst5,++lst5.begin());
    display(lst);
    // void splice(iterator it, list &lst, iterator first, iterator end)
    lst.splice(lst.begin(),lst5,++lst5.begin(),--lst5.end());
    display(lst);
    return 1;
}