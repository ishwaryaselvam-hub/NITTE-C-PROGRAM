//i/p     o/p 
//3  3    
// 1 2 3  Row1 sum is : 6
// 4 5 6  Row2 sum is : 15
// 7 2 1  Row3 sum is : 10
#include<stdio.h>
int main()
{
	int r,c,i,j,sum;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&arr[i][j]);	
		}
	}
		for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
	      sum=sum+arr[i][j];
	     }
	 printf("Row%d sum is : %d\n",i+1,sum);
	 }
}