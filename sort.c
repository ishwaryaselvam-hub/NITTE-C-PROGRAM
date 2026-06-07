#include<stdio.h>
int main()
{
	int numsSize,i,zc=0,oc=0;
	scanf("%d",&numsSize);
	int nums[numsSize];
	for(i=0;i<numsSize;i++)
	scanf("%d",&nums[i]);
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
            zc++;
        else if(nums[i]==1)
            oc++;
    }
    for(i=0;i<zc;i++)
        nums[i]=0;
    for(i=zc;i<zc+oc;i++)
        nums[i]=1;
    for(i=zc+oc;i<numsSize;i++)
        nums[i]=2;
    for(i=0;i<numsSize;i++)
        printf("%d ",nums[i]);
}