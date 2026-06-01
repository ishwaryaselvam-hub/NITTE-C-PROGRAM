#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(m>=0 &&  m<=34)
	printf("Fail");
	else if(m>=35 && m<=60)
	printf("Average");
	else if(m>=61 && m<=80)
	printf("Good");
	else if(m>=81 &&m<=100)
	printf("Excellent");
}