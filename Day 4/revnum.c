#include<stdio.h>
int main()
{
	int n,d,rev=0;
	scanf("%d",&n);//875
	int temp=n;
	while(n)//8
	{
	  	d=n%10;//8%10=8
	  	rev=rev*10+d;//57*10+8=578
	  	n=n/10;//8/10=0	
	}
	printf("%d Reverse Number is= %d",temp,rev);
}