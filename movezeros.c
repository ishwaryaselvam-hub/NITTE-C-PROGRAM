//i/p              o/p 
//5 
//0 1 0 1 1       0 0 1 1 1

#include<stdio.h>
int main()
{
	int n,zc=0,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
     if(arr[i]==0)
     zc++;}
     for(i=0;i<zc;i++)
     arr[i]=0;
     for(i=zc;i<n;i++)
     arr[i]=1;
     for(i=0;i<n;i++)
     printf("%d ",arr[i]);
}