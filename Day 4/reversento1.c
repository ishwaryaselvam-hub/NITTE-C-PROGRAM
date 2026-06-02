#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);//5
	i=n;//i=5
	do
	{
	printf("%d ",i);//5 4 3 2 1
	sum+=i;//sum=14+1=15
	i--;//i=0
	}while(i>=1);//0>=1
	printf("\nsum is: %d",sum);
}