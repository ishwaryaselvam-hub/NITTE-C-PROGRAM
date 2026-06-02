#include<stdio.h>
int main()
{
	int n,temp,c=0,d;
	scanf("%d",&n);//1248
	temp=n;
	while(n)//0
	{
		d=n%10;//1%10=1
		if(temp%d==0)//1248%1==0
		c++;//c=4
		n=n/10;//1/10=0
	}
	printf("%d",c);
}