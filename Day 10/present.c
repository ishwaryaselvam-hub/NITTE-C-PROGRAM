#include<stdio.h>
int main()
{
	int i=0,flag=0,x;
	char arr[100];
	scanf("%[^\n]s",arr);
	scanf("%d",x);
	char ch;
	scanf("%c",&ch);
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==ch)
		{
			flag=1;
			printf("Present");
			break;
		}
	}
	if(flag==0)
	printf("Not Present");
}