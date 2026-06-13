#include<stdio.h>
int main()
{
	int n,i,sum=0,sumn;
	scanf("%d",&n);
	int arr[n-1];
	for(i=0;i<n-1;i++)
    {
    	scanf("%d",&arr[i]);
   	sum+=arr[i];
	}
	sumn=n*(n+1)/2;
	printf("Missing Number %d",sumn-sum);
}