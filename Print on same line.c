#include<stdio.h>

int main()
{
	int i=0;
	while(i++!=50)
	{
		printf("\r%d",i);
		fflush(stdout);
//		sleep(0.5);
	}
return 0;
}

