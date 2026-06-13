#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,ans=0,i;
	scanf("%d",&n);
	int *ptr;
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	scanf("%d",&ptr[i]);
	ans^=ptr[i];
}
printf("%d",ans);
}