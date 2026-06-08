//type 2
//returntype functionname(datatype);//function declaration
//returntype functionname(datatype value/variable)
//{
//	//setofstatements    //function definition
//}
//int main()
//{
//	functionname(value/variable);//function calling
//}
#include<stdio.h>
void palindrome(int);
int main()
{
	int n;
	scanf("%d",&n);
	palindrome(n);
}
void palindrome(int n)
{
	int temp=n,d,rev=0;
	while(n!=0)//0
	{
		 d=n%10;//1%10=1
		rev=rev*10+d;//12*10+1=121
		n=n/10;//1/10=0
	}
	if(rev==temp)
	printf("Palindrome Number");
	else 
	printf("Not a Palindrome Number");
	
}




