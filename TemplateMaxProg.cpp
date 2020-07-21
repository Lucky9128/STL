#include<iostream>
using namespace std;

/* template is a keyword and typename as well
we can use class instead of typename */

template <typename abc>
abc Max(abc a1,abc a2)
{
	//cout<<a1<<endl<<a2<<endl;
	if(a1>a2) return a1;
	else return a2;
}

int main()
{
cout<<Max(12.45,20.2)<<endl;
cout<<Max(12,20)<<endl;
cout<<Max('a','A')<<endl;
return 0;
}