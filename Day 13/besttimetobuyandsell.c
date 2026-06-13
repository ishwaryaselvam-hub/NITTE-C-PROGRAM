#include<stdio.h>
int main()
{
	int n,max=0,i,j,p;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			p=arr[j]-arr[i];
			if(p>max)
			max=p;
		}
	}
	printf("%d",max);
}