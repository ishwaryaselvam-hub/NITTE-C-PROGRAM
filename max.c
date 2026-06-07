//i/p                     o/p 
//5
//10 20 134 17 5           134
//0   1   2 3  4
//
//
//int max=INT_MIN;//-2
//i=0
//if(arr[0]>max)//10>-2
//max=arr[0];//10
//i=1
//if(arr[1]>max)//20>10
//max=arr[1];//11 
//i=2 
//if(arr[2]>max)//134>20
//max=arr[2];//134
//i=3
//if(arr[3]>max)//134 >17
//i=4 
//if(arr[4]>max)//134>5
//i=5






#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i,max;
	scanf("%d",&n);//5
	int arr[n];
	max=INT_MIN;
	for(i=0;i<n;i++){//10 20 134 17 5
	scanf("%d",&arr[i]);
	if(arr[i]>max)
	max=arr[i];
    }
    printf("Maximum Element is : %d",max);
	
	
	
	
	
}