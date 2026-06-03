//    **
//   ****
//  ******
// ********
//**********
// ********
//  ******
//   ****
//    **
//     
#include<stdio.h>
int main()
{
	int n,row,col;
	scanf("%d",&n);
	for(row=0;row<n-1;row++,printf("\n"))
	{
		for(col=0;col<n-row-1;col++)
		printf(" ");
			for(col=0;col<=row;col++)
		printf("*");
			for(col=0;col<=row;col++)
		printf("*");
	}
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<=row-1;col++)
		printf(" ");
			for(col=0;col<n-row;col++)
		printf("*");
			for(col=0;col<n-row;col++)
		printf("*");
	}
}