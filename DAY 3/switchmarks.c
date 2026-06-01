#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	switch(m)
	{
		case 0 ... 34:
			printf("Fail");
			break;
		case 35 ... 60:
			printf("Average");
			break;
		case 61 ... 80:
			printf("Good");
			break;
		case 81 ... 100:
			printf("Excellent");
			break;	
		default:
			printf("Invalid Input");
	}
}