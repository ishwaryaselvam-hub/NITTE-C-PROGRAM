#include<stdio.h>
int main()
{
	int n,d;
	scanf("%d",&n);//864
	while(n)//8
	{
		d=n%10;//8%10=8
		printf("%d",d);//468
		n=n/10;//8/10=0
	}
}