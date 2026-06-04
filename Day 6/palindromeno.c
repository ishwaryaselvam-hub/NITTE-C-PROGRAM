#include<stdio.h>
int main()
{
	int n,temp,d,rev=0;
	scanf("%d",&n);//121
	temp=n;//121
	while(n)//0
	{
	d=n%10;//1%10=1
	rev=rev*10+d;//12*10+1=121
	n/=10;//1/10=0		
	}
	if(temp==rev)
	printf("Palindrome Number");
	else 
	printf("Not a palindrome Number");	
}