#include<iostream>
#include<unistd.h>
#include<stdio.h>
using namespace std;

//ChangeBitction to set a particular bit in int
int ChangeBit(int num, int pos, int val)
{
    int bitop = 1<<pos;
    if(val == 0)
    {
        bitop = ~bitop;
        num= num & bitop;
    }
    else
    {
        num|=bitop;
    }
    return num;
}



int main()
{
	char abc[] = "dbhrhvra";
	int abc2[] = {1,2,3,4,5,6};
	
	// size of an element
	int x = sizeof(abc)/sizeof(abc[0]);
	int y = sizeof(abc2)/sizeof(abc2[0]);
	cout<<"Size of string is "<<x<<endl; 
	cout<<"Size of string is "<<y<<endl; 

    //print on the same line //not working I have to check
	// int i=0;
	// while(i++!=50)
	// {
	// 	cout<<i<<"\r\n"<<i;
    //     sleep(1);
	// }
    // cout<<endl;

    int num=10;
    num = ChangeBit(num,10,1);
    cout<<num<<endl;





	return 0;
}