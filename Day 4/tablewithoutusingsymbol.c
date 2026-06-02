//1*2=2      sum=0+2=2
//2*2=4      sum=2+2=4
//3*3=6      sum=sum+t=4+2=6
#include<stdio.h>
int main()
{
	int t,n,i,sum=0;
	scanf("%d%d",&t,&n);
	for(i=1;i<=n;i++){
	sum=sum+t;
	printf("%02d * %02d =%02d\n",i,t,sum);}}
                  
                  
                  