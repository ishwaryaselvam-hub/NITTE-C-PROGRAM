//n=5 
//11111
//22222
//33333
//44444
//55555
//
//row     display      
//0        1
//1        2 
//2        3 
//3        4 
//4        5 

#include<stdio.h>
int main()
{
	int n,row,col;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<n;col++)
		printf("%d",row+1);
	}}