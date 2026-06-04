//7   c=0
//for(i=2;i<=n/2;i++)
//if(n%i==0)
//{
//c++;
//break;


#include<stdio.h>
int main()
{
	int n,c=0,i;
	scanf("%d",&n);//2 
	for(i=2;i*i<=n;i++)//i=2 2<=2/2=1   
	{
		if(n%i==0)
		{
		c++;
		break;
     	}
	}
	if(c==0)
	printf("Prime Number");
	else 
	printf("Not a prime Number");
}

