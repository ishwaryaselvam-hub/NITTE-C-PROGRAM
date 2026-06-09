#include<stdio.h>
int main()
{
	int i,c=0;
	char arr[100];
	scanf("%[^\n]s",arr);//hi hello
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==' ')
		c++;
	}
	printf("No of words %d",c+1);
}