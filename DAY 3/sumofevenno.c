#include<stdio.h>
int main(){
	int s,e,i,sum=0;
	scanf("%d%d",&s,&e);
	for(i=s;i<=e;i++)
	{
	   if(i%2==0)
	   sum+=i;//sum=sum+i;	
	}
	printf("%d",sum);
}