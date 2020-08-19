#include <stdio.h>
#include <string.h>


void display(int *arr, int k)
{
    for(int i=0;i<k;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}


void swap(int *a1,int *a2)
{
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}


int part(int *A, int low, int high)
{
    int pvt = A[high];
    int i=low-1;

    for(int j=low;j<=high-1;j++)
    {
        if(A[j]<pvt)
        {
            i++;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[i+1],&A[high]);
    return i+1;
}

void quick(int *arr, int low, int high)
{
    if(low<high)
    {
        int pivot = part(arr,low,high);
        quick(arr,low,pivot-1);
        quick(arr,pivot+1,high);
    }
}

int IndexOf(int *arr,int low,int high,int val)
{
    while(low<=high)
    {
        int mid  = (low+high)/2;
        // printf(".");
        if(arr[mid]==val)
            return mid;

        if(arr[mid]<val)
            low = mid+1;
        else
            high=mid-1;
    }
    // printf("\n");
    return -1;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    else 
        return b;
}

int isValid(int *arr,int len)
{
    for(int i=0;i<len;i+=2)
    {
        if(arr[i]!=arr[i+1])
            return 0;
    }
    return 1;
}
int removeDup(int *arr,int len)
{
	int pre = arr[0];
	int temp=0;
	for(int i = 1;i<len;i++)
	{
		if(arr[i]!=pre)
		{
			temp++;
			// printf("Swapping %d %d\n",arr[temp],arr[i]);
			pre = arr[i];
			swap(&arr[temp],&arr[i]);
		}
	}
	return temp+1;
}
int main(void) 
{
	// int arr[] = {};
	// int len2 = 4;
	// quick(arr,0,len2-1);
	// int len = removeDup(arr,len2);
	// // display(arr,len+1);
	// int i=0;
	// while(i<len)
	// {
	// 	if(arr[i]>0)
	// 	break;
	// 	else
	// 	i+=1;
	// }
	// printf("Starting fform %d to %d\n",i,len);
	// int cnt =1;
	// // display(arr,15);
	// while(i<len)
	// {
	// 	if(arr[i]!=cnt)
	// 		break;
	// 	else
	// 	{
	// 		cnt++;
	// 		i++;
	// 	}
	// }
	// printf("Final %d\n",cnt);
		// int tc;
	// scanf("%d",&tc);
	// for(int m=0;m<tc;m++)
	// {
	//     int len;
	//     scanf("%d",&len);
	//    // printf("%d\n",len);
	//     int arr1[len],arr2[len];
	//     for(int j=0;j<len;j++)
	//         scanf("%d",&arr1[j]);
	//     for(int j=0;j<len;j++)
	//         scanf("%d",&arr2[j]);
	//     int l1 =len;
	//     int l2= len;
	//    // display(arr1,l1);
	//    // display(arr1,l2);
	//     quick(&arr2[0],0,l2-1);
	//     for(int i=0;i<l1;i++)
    //     {
    //         int j = IndexOf(arr2,0,l2,arr1[i]);
            
    //         if(j!=-1)
    //         {
    //             // printf("replacing %2d -> %2d i = %2d -> len %2d ::-> ",arr1[i],arr2[j],i,l1-1);
                
    //             swap(&arr1[i],&arr1[l1-1]);
    //             l1--;
    //             i--;
    //             swap(&arr2[j],&arr2[l2-1]);
    //             l2--;
    //             quick(&arr2[0],j,l2-1);
    //             // display(arr2,len);
	        
    //         }
    //         // else
    //         // printf("%d not found\n",arr1[i]);
    //     }
    //     int cost=0;
    //     quick(&arr1[0],0,l2-1);
    //     if(l1==0)
    //         printf("0\n");
    //     else if(isValid(arr1,l1)&&isValid(arr2,l2)&&l1%2==0)
    //     {
    //         for(int i=0;i<l1;i+=2)
    //         {
    //             cost+=min(arr1[i],arr2[i]);
    //             swap(&arr1[i],&arr2[i]);
    //         }
    //         printf("%d\n",cost);
    //     }
    //     else
    //         printf("-1\n");
	// }
	return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int tc=1;
// 	// scanf("%d",&tc);
// 	for(int i=0;i<tc;i++)
// 	{
// 	    long k=2746566686546;
// 	    int d0=5,d1=2;
// 	    int sum = d0+d1;
//         k=k%3;
// 	    while(k--)
// 	    {
// 	        sum += sum%10;
// 	    }
//         printf("%d->%d\n",sum,sum%3);
// 	    if(sum%3==0)
// 	    {
// 	        printf("YES\n");
// 	    }
// 	    else
// 	    printf("NO\n");
// 	}
// 	return 0;
// }


/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++)
	{
	    long int k;
	    int d0,d1;
	    cin>>k;
	    cin>>d0;
	    cin>>d1;
	    k-=2;
	    int sum=d0+d1;
	    int t1 = k%12;
	    while(t1--)
	    {
	        sum+= sum%10;
	    }
	    int temp = d0+d1;
	    if(temp%2==0)
	    {
	        if(sum%3==0)
	            printf("YES\n");
	        else
	            printf("NO\n");
	    }
	    else
	    {
	        if(k%12!=0)
	        {
    	        if(sum%3==0)
    	            printf("YES\n");
    	        else
    	            printf("NO\n");
	        }
	        else
	        {
	            if(temp==7||temp==11)
	                printf("YES\n");
	            else
	                printf("NO\n");
	        }
	    }
	}
	return 0;
}

*/

