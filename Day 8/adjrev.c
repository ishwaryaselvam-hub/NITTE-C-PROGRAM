//10 20 30 40 50 
//20 10 40 30 50
#include<stdio.h>
int main()
{
	int n,i,temp;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]); 
	for(i=0;i<n-1;i+=2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}