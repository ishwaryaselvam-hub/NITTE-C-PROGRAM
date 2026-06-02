//
//do
//{
//	//set of statements
//	//inc/dec
//}while(condition);




#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=n);
}