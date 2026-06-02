#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);//123
	while(n)//0
	{n/=10;//1/10=0
		c++;//c=3
	}
	printf("%d",c);
}