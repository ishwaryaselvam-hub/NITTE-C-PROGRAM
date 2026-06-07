#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
	}
	for(i=0;i<n;i++)
	{
printf("%d ",arr[i][i]);//arr[0][0]
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
printf("%d ",arr[i][n-1-i]);//arr[0][0]
	}
}




//1   2    3 
//00  01   02 
// 
//4   5   6 
//10  11   12 
//
//7   8    9 
//20  21   22
//
//
//row+col==n-1 
//i+j==n-1
//j=n-1-i