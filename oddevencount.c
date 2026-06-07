#include<stdio.h>
int main()
{
	int n,i,oc=0,ec=0;
	scanf("%d",&n);//5
	int arr[n];
	for(i=0;i<n;i++)//12 3 5 16 9
	//                 0  1 2 3 4
	{
	scanf("%d",&arr[i]);//arr[4]
	if(arr[i]%2==0)//9%2==0
	ec++;//2
	else 
	oc++;//3
}
printf("Even Elements count value : %d\n",ec);
printf("Odd Elements count value : %d",oc);	
}