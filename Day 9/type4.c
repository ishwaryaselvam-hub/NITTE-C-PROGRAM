//type 4
//datatype functionname(datatype);//function declaration
//datatype functionname(datatype value/variable)
//{
//	//setofstatements    //function definition
//}
//int main()
//{
//	functionname(value/variable);//function calling
//}

#include<stdio.h>
int sumofpdig(int);
int main()
{
int n;
scanf("%d",&n);
int ans=sumofpdig(n);
printf("Sum of Prime digit : %d",ans);
}
int sumofpdig(int  n)
{
	int d,sum=0;
	while(n!=0)//0
	{
		d=n%10;//2%10=2
		if(d==7||d==2||d==3||d==5)
		sum+=d;//7+2=9
		n=n/10;//2/10=0
	}
	return sum;
}




