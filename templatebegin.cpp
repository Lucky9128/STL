#include<iostream>
using namespace std;

template <class abc>
int My(abc doc)
{
	return doc;
}

int main()
{
cout<<My(12.45)<<endl;
cout<<My(12);
return 0;
}