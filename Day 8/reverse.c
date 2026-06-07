#include<stdio.h>
int main()
{
	int n,i,s,e;
	scanf("%d",&n);
	int arr[n];
	s=0;
	e=n-1;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	while(s<e)
	{
		int temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	
	
}







//10 20 30 40 50 
//0   1  2  3  4 
//
//50 40 30 20 10 
//0  1   2 3   4