#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,ns,*ptr,i;
	scanf("%d",&n);
	scanf("%d",&ns);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    printf("%d ",ptr[i]);
    printf("\n");
ptr=(int*)realloc(ptr,ns*sizeof(int));
    for(i=0;i<ns;i++)
    printf("%d ",ptr[i]);
    free(ptr);}