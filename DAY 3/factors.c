//6      1 2 3   6
//5      1       5 
//8      1 2 4   8 
//10     1 2 5   10
//
//n%i==0
//6%1==0    1
//6%2==0    2 
//6%3==0    3 
//6%4==0    
//6%5==0 
//6%6==0    6    






//#include<stdio.h>
//int main()
//{
//	int n,i;
//	scanf("%d",&n);//3
//	for(i=1;i<=n;i++)//i=3 3<=3
//	{
//		if(n%i==0)//3%3==0
//		printf("%d ",i);//1 3
//	}
//}


#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);//3
	for(i=1;i<=n/2;i++)//i=3 3<=3
	{
		if(n%i==0)//3%3==0
		printf("%d ",i);//1 3
	}
	printf("%d",n);
}






