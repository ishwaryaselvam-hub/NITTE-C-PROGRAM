#include<stdio.h>
int main()
{
	char arr[100];
	scanf("%[^\n]s",arr);
	int i=0,len=0;
	while(arr[i++]!='\0')
		len++;
	int s=0,e=len-1;
	while(s<e)
	{
		int temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}
	for(i=0;i<len;i++)
	printf("%c",arr[i]);
	printf("\n");
	printf("%c",arr[0]);
}