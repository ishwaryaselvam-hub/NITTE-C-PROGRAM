#include<stdio.h>
int main()
{
	char arr[100];
	scanf("%[^\n]s",arr);
	int i,len=0;
	for(i=0;arr[i]!='\0';i++)
		len++;
	
  for(i=len-1;i>=0;i--)
	printf("%c",arr[i]);
}