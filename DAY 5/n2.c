//n=5 
//12345 
//12345 
//12345 
//12345
//12345
//col     diplay 
//01234    12345      




#include<stdio.h>
int main()
{
	int n,row,col;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<n;col++)
		printf("%d",col+1);
	}}