//pass by value
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);//10
	printf("original value : %d\n",a);
	print(a);
		printf("After changes : %d\n",a);	
}
void print(int a)
{
	a=100;	
}