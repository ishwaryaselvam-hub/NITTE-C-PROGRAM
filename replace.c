//i/p                 o/p                               
//5
//10 20 30 40 50      10 20 30 12 50
//3
//12

#include<stdio.h>
int main()
{
	int n,ind,val,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&ind);//3
	scanf("%d",&val);//12
	arr[ind]=val;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	
}