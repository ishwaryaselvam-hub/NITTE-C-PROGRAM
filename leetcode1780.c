//i/p               o/p
//4   
//1 2 3 4         [1, 1+2, 3+3, 1+2+3+4].
//                 1   3    6      10 
//                 0    1   2      3 
//                 
//        arr[1]=arr[0]+arr[1];
//        arr[i]= arr[i-1]arr[i];
//        arr[2]=arr[1]+arr[2];
//                 
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	arr[i]=arr[i-1]+arr[i];
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
