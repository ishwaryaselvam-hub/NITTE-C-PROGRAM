//220 284
//n1=220  ->sum1=284
//n2=284  -->sum2=220
//amicable pair
//n1==sum2  && n2==sum1
#include<stdio.h>
int main()
{
	int n1,n2,i,s1=0,s2=0;
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1/2;i++){
	if(n1%i==0)
	s1+=i;}
	for(i=1;i<=n2/2;i++){
	if(n2%i==0)
	s2+=i;}
	if(n1==s2 && n2==s1)
	printf("amicable pair");
	else 
	printf("Not an amicable pair");
	
}