#include<stdio.h>
int main()
{
	char arr[100];
	scanf("%[^\n]s",arr);
	int i,c=0;
	for(i=0;arr[i]!='\0';i++)
	{
if(!((arr[i]>='A' && arr[i]<='Z')||
(arr[i]>='a' && arr[i]<='z')||
(arr[i]>='0' && arr[i]<='9')))
c++;
	}
printf("special Character count is %d",c);
}