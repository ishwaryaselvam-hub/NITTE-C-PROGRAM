//n=5
//1
//2 3
//4 5 6 
//7 8 9 10 
//11 12 13 14 15
//c=1 
//c++

#include<stdio.h>
int main()
{
	int n,row,col,c=1;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
	for(col=0;col<=row;col++)
	printf("%02d ",c++);
	}}