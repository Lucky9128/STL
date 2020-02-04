#include<stdio.h>

void main()
{
	int i=0;
	while(i++!=50)
	{
		printf("\r%d",i);
		fflush(stdout);
		sleep(0.5);
	}
}
