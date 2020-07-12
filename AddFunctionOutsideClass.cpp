#include<iostream>

using namespace std;

class abc{
	public:
	int var;
	int Value(void);
};
int abc::Value(void)
{
	return var;
}

int main()
{
	abc obj;
	obj.var =10;
	cout<<obj.Value();
	return 0;
}
