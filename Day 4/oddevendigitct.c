#include<stdio.h>
int main()
{
	int n,d,oc=0,ec=0;
	scanf("%d",&n);
	while(n)//0
	{
		d=n%10;//1%10=1
		if(d%2==0)//1%2==0
		ec++;//ec=1
		else
		oc++;//oc=2
		n=n/10;//1/10=0	
	}
	printf("Odd digit count %d \n",oc);
	printf("Even digit count %d",ec);
}