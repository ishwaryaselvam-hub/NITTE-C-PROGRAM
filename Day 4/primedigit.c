#include<stdio.h>
int main()
{
	int n,d,c=0;
	scanf("%d",&n);
	while(n)//0
	{
		d=n%10;//1%10=1
		if(d==2||d==3||d==5||d==7)//
		c++;//3
		n=n/10;//1/10=0
	}
	printf("prime digit count %d",c);
}