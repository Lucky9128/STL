#include<iostream>
#include<vector>
#include<cstdio>

#include<unordered_map>

#define ll int
#define vvi vector<vector<ll>>
#define vi vector<ll>

#define inf INT32_MAX

#define Min(x,y) x<y?x:y
#define Max(x,y) x<y?y:x

using namespace std;
void display(vector<int> vec)
{
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";       
    }
    cout<<endl;
}

void swap(int *a1,int *a2)
{
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

int part(vector<int> &A, int low, int high)
{
    int pvt = A[high];
    int i=low-1,j=high;

    for(int j=low;j<high;j++)
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


void quick(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int pivot = part(arr,low,high);
        // printf("pivot->%d\n",pivot);
        // display(arr,10);
        int i;
        // scanf("%d",&i);
        quick(arr,low,pivot-1);
        quick(arr,pivot+1,high);
    }
}
int main()
{
	vi nums = {};
	quick(nums,0,nums.size()-1);
	int cnt=0;
	int k=2;
	int firstI=0;
    // cin>>k;
    for(int i=0;i<(int)nums.size()-1;i++)
    {
        if(i<=firstI)
            firstI = i+1;
        for(int j=firstI;j<nums.size();j++)
        {
            if(nums[j]-nums[i]==k)
            {
                // cout<<i<<"\t"<<j<<endl;
                firstI = j+1;
                cnt++;
                while(i<nums.size())
                    if(nums[i]==nums[i+1])
                        i++;
                break;
            }
        }
    }


	//  for(int i=0;i<nums.size();i++)
    //     {
    //         for(int j=i+1;j<nums.size();j++)
    //         {
    //             if((nums[j]-nums[i])==k)
    //             {
    //                 cnt++;
    //                 firstI=i;firstJ=j;
    //                 break;
    //             }
    //         }
    //         if(firstI>=0)
    //             break;
    //     }
    //     cout<<firstI<<"\t"<<firstJ<<endl;
    //     if(firstI>=0)
    //     {
	// 		firstJ++;
	// 		firstI++;
	// 		for(int i=firstI;i<nums.size()-1;i++)
	// 		{
	// 			if(nums[i-1]==nums[i])
	// 			{
	// 				continue;                
	// 			}
	// 			else
	// 			{
    //                 if(i<=firstJ)
    //                     firstJ = i+1;
	// 				int j = firstJ;
	// 				while(j<nums.size())
	// 				{
	// 					if((nums[j]-nums[i])==k)
	// 					{
    //                         cout<<"Found "<<i<<"\t"<<j<<endl;
	// 						cnt++;
	// 						firstJ = j;
	// 						break;
	// 					}
	// 					j++;
	// 				}
	// 			}
	// 		}
	// 	}
	cout<<cnt<<endl;


	return 0;
}