#include<stdio.h>
int main(){
	char arr[100];
	scanf("%[^\n]s",arr);
	int i,x,c=0;
	scanf("%d",&x);
	char s;
	scanf("%c",&s);
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==s)
		c++;
	}
printf("occurrence of %c character %d",s,c);
}