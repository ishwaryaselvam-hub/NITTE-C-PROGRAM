//type 3
//returntype functionname();//function declaration
//datatype functionname()
//{
//	//setofstatements    //function definition
//}
//int main()
//{
//	functionname();//function calling
//}

//#include<stdio.h>
//int fun();
//int fun()
//{
//	int a=12;
//	if(a%2==0)
//	return 1;
//	else 
//	return 0;
//}
//int main()
//{
//	int ans=fun();
//	if(ans==1)
//	printf("even");
//	else 
//	printf("odd");
//}



#include<stdio.h>
int perfect();
int main()
{
	int ans=perfect();
	if(ans==1)
	printf("perfect square");
	else 
	printf("Not a perfect square");
}
int perfect()
{
   int i,n,flag=0;
   scanf("%d",&n);
   for(i=1;i<=n/2;i++)
   {
   	if(i*i==n)
   	{
   		flag=1;
   	return 1;
   	break;
   }
}
   if(flag==0)
   return 0;
}



