#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i,min;
	scanf("%d",&n);//5
	int arr[n];
	min=INT_MAX;
	for(i=0;i<n;i++){//10 20 134 17 5
	scanf("%d",&arr[i]);
	if(arr[i]<min)
	min=arr[i];
    }
    printf("Minimum Element is : %d",min);	
}