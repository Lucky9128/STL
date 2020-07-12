#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int i;
	
	vec.assign(7,100);
	
	cout<<"Size "<<vec.size()<<endl;
	
	for(i=0;i<=10;i++)
		vec.push_back(i);
	
	for(i=0;i<=vec.size();i++)
		cout<<vec[i];	
	
	cout<<"\nSize "<<vec.size()<<endl;
	
	return 0;
}