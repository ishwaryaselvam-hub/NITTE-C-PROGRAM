#include<stdio.h>
int main()
{
		int row,col,n;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<n;col++)
		{
			if(col==0||col==n-1||row==col)
			printf("N");
			else 
			printf(" ");
		}
	}
}