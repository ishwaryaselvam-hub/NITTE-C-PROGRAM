#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)//     i j
	scanf("%d",&arr[i]);//12 4 5 54 7
	for(i=0;i<n;i++)//     0 1 2 3  4
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])//12>4
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}