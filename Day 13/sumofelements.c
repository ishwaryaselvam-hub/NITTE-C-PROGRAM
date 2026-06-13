#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i,sum=0;
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	scanf("%d",&ptr[i]);
    sum+=ptr[i];
}
printf("%d",sum);
free(ptr);
}