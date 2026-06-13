#include<stdio.h>
int main()
{
	int n,i,low,high,t,mid,flag=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&t);
	low=0;
	high=n-1;
	while(low<high)
	{
	mid=(low+high)/2;
	if(arr[mid]==t)
	{
		flag=1;
		printf("present");
		break;
	}
	else if(mid<t)//3<9
	low=mid+1;
	else
	high=mid-1;
    }
    if(flag==0)
    printf("Not present");	
}