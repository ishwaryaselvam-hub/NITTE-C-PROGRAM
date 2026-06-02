//i/p                o/p 
//2 5               1*2=2
//t n               2*2=4 
//                  3*2=6
//                  4*2=8
//                  5*2=10
//                  i*t=ans              
//                  
//
//3 2               1*3=3 
//                  2*3=6

#include<stdio.h>
int main()
{
	int t,n,i;
	scanf("%d%d",&t,&n);
	for(i=1;i<=n;i++)
	printf("%02d * %02d = %02d\n",i,t,i*t);
	
}
                  
                  
                  