#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("original value %d %d\n",a,b);//10
	swap(&a,&b);
	printf("After changes %d %d",a,b);//100
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}