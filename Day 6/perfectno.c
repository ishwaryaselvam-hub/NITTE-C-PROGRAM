#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)//6%1==0
		sum+=i;
	}
	if(sum==n)
	printf("Perfect Number");
	else 
	printf("Not a Perfect Number");
}