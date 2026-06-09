#include<stdio.h>
#include<limits.h>
int main()
{
	char arr[100];
	scanf("%[^\n]s",arr);
	int i,min=INT_MAX;
	char ch;
	int freq[256]={0};
	for(i=0;arr[i]!='\0';i++)
		freq[arr[i]]++;
	for(i=0;i<256;i++)
	{
		if(freq[i]<min &&freq[i]>0)
		{
			min=freq[i];
			ch=i;
		}
	}
	printf("%c %d",ch,min);
	
}