#include<stdio.h>
int main()
{
	int n,i,fact=1;
	scanf("%d",&n);//5
	for(i=1;i<=n;i++)//i=6 6<=5
		fact=fact*i;//fact=24*5=120
printf("factorial value of %d: %d",n,fact);
}