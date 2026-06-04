//n=145
//
//
//d=5   5!=120
//n=14 
//d=4   4!= 24 
//n=1 
//d=1   1!=  1 
//        =====
//		  145

#include<stdio.h>
int main()
{
	int n,temp,d,i,fact,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n)//0
	{
		d=n%10;//1%10=1
		fact=1;//fact=1
		for(i=1;i<=d;i++)//1
		fact*=i;//1
	    sum+=fact;//sum=144+1=145
		n=n/10;//1/10=0	
	}
	if(sum==temp)
	printf("Strong Number");
	else 
	printf("Not a strong Number");
}