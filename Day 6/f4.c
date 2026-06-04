#include<stdio.h>
int main()
{
	int row,col,n;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		for(col=0;col<n;col++)
		{
			if(row==0||row==n-1||col==0)
			printf("c");
			else 
			printf(" ");
		}
	}
}