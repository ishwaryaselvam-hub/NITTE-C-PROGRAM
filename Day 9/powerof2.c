#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);//8
	int ans=poweroftwo(n);
	if(ans==1)
	printf("Power of 2");
	else 
	printf("Not a Power of 2");
}
int poweroftwo(int n)//8
{
	while(n%2==0)//8%2==0
	n=n/2;//8/2=4
	return n;
}