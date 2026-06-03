//n=5 
//54321      5-0 5-1 5-2 5-3 5-4
//5432
//543 
//54 
//5
#include<stdio.h>
int main()
{
	int n,row,col;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<n-row;col++)
		printf("%d ",n-col);
	}}