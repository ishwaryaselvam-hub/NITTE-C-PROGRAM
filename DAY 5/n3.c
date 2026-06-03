//n=5 
//1
//22
//333
//4444
//55555     




#include<stdio.h>
int main()
{
	int n,row,col;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<=row;col++)
		printf("%d",row+1);
	}}