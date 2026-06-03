//n=5
//12345 
//1234 
//123
//12
//1
#include<stdio.h>
int main()
{
	int n,row,col;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<n-row;col++)
		printf("%d",col+1);
	}
}