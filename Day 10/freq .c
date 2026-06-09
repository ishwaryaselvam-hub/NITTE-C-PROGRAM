#include<stdio.h>
int main()
{
	char arr[100];
	scanf("%[^\n]s",arr);
	int i;
	int freq[256]={0};
	for(i=0;arr[i]!='\0';i++)
		freq[arr[i]]++;
		for(i=0;i<256;i++)
		{
			if(freq[i]>0)
			printf("%c : %d\n",i,freq[i]);
		}
}