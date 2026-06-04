#include<stdio.h>
int main()
{
	int n1,n2,i,j,c;
	scanf("%d%d",&n1,&n2);//2 
	for(j=n1;j<=n2;j++)//j=10
	{
	 c=0;
	for(i=2;i*i<=j;i++)//i=2 2<=2/2=1   
	{
		if(j%i==0)//10%2==0
		{
		c++;
		break;
     	}
	}
	if(c==0)
    printf("%d ",j);}
}

