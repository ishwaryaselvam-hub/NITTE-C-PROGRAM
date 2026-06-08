#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("original value %d\n",n);//10
	change(&n);
	printf("After changes %d",n);//100
}
void change(int *n)s
{
	*n=500;
}