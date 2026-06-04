//n=153 
//count=3
// 
//d=3    3^3    =27 
//n=15 
//      5^3     =125 
//n=1 
//      1^3     =  1 
//      =================
//               153 
//#include<math.h>
//pow(base,power);
//pow(d,c);


#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,c=0,d,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n)//1
	{
	n=n/10;//1/10=0
	c++;//3
	}
	n=temp;//153
	while(n)//0
	{
		d=n%10;//1%10=1
		sum=sum+pow(d,c);//152+1=153
		n=n/10; //1/10=0	
	}
	if(temp==sum)     
	printf("Armstrong Number");
	else 
	printf("Not an Armstrong Number");	
}


