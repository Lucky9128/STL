#include<iostream>
using namespace std;


class A
{
    public:
        // void Hell3()
        // {
        //     cout<<"Hello 1"<<endl;
        // }
};
class B : public A
{
    public:
        void Hell3(){};
        void Hell3(int k)
        {
            cout<<"Hello 2"<<endl;
        }
};
int main()
{
    B ab;
    ab.Hell3();
    ab.Hell3(10);
    return 0;
}