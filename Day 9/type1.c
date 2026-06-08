////type 1
//returntype functionname();//function declaration
//return type functionname()
//{
//	//setofstatements    //function definition
//}
//int main()
//{
//	functionname();//function calling
//}

#include<stdio.h>
//void fact();//function declaration

int main()
{
	fact();//function calling
}
void fact()
{
	int n,i,f=1;
	scanf("%d",&n);//4
	for(i=1;i<=n;i++)//i=4 4<=4
	f*=i;//f=1*1=1*2=2*3=6*4=24
	printf("%d",f);
}





