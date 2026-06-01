#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0)
	printf("Divisible by 3");
	else 
printf("Not Divisible by 3 and Remainder is %d",a%3);
}