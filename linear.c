//i/p                o/p 
//5
//10 20 30 40 50     Present  
//40
//
//5
//10 20 30 40 50     Not present 
//100
//
#include<stdio.h>
int main()
{
	int n,i,e,flag=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(arr[i]==e)//
		{
			flag=1;
			printf("present");
			break;
		}
	}
	if(flag==0)
	printf("Not present");
}
