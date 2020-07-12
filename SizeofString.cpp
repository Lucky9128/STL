#include<iostream>
using namespace std;
int main()
{
	char abc[] = "dbhrhvra";
	int x = sizeof(abc)/sizeof(abc[0]);
	// String have a \0 at the end
	cout<<"Size of string is "<<x-1; 
	return 0;
}