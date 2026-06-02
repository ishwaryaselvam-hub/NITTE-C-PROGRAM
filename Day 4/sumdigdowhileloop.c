#include<stdio.h>
int main()
{
	int n,a,sum=0;
	scanf("%d",&a);
	do
	{
		n=a%10;
		sum=sum+n;
		a/=10;
	}while(a);
	printf("%d",sum);
}