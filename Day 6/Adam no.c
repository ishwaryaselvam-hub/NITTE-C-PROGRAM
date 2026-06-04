#include<stdio.h>
int main()
{
	int n,sn,d,rn=0,srn,rsrn=0;
	scanf("%d",&n);//12 
	sn=n*n;//12*12=144
	while(n)//0
	{
		d=n%10;//1%10=1
		rn=rn*10+d;//2*10+1=21
		n=n/10;//1/10=0
	}
	srn=rn*rn;//21*21=441
	while(srn)//0
	{
		d=srn%10;//4%10=4
		rsrn=rsrn*10+d;//14*10+4=144
		srn=srn/10;//4/10=0
	}
	if(sn==rsrn)
	printf("Adam Number");
	else 
	printf("Not an Adam Number");
	
}