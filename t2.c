#include<stdio.h>
int var=10;
static int var2=12;
int fun()
{        
    int k;
    printf("%d->%d\n",var,var2);
    scanf("%d",&var);
}