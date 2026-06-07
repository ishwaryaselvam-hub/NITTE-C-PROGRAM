////by using third variable
//#include<stdio.h>
//int main()
//{
//	int a,b,temp;
//	scanf("%d%d",&a,&b);//10 20
//printf("Before swap: %d %d\n",a,b);
//temp=a;
//a=b;
//b=temp;
//printf("After swap: %d %d",a,b);
//	
//}
//without using third variable
//#include<stdio.h>
//int main()
//{
//	int a,b,temp;
//	scanf("%d%d",&a,&b);//10 20
//printf("Before swap: %d %d\n",a,b);
//a=a+b;
//b=a-b;
//a=a-b;
//printf("After swap: %d %d",a,b);
//	
//}
//by using xor operator
#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);//10 20
printf("Before swap: %d %d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("After swap: %d %d",a,b);
	
}