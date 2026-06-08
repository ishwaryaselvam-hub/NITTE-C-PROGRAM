#include<stdio.h>
#include<math.h>
int autom(int);
int main()
{
	int n;
	scanf("%d",&n);
	int ans=autom(n);
	if(ans==n)
	printf("Automorphic Number");
	else 
	printf("Not an Automorphic Number");
}
int autom(int n)//25
{
	int c=0;
	int s=n*n;//25*25=625
	while(n)//
	{
		n=n/10;//2/10=0
		c++;//c=2
	}
	int ans=s%(int)pow(10,c);
	return ans;
}