#include<stdio.h>
int main()
{
	int i,c=0;
	char arr[100];
	scanf("%[^\n]",arr);
	int freq[256]={0};//ABCC
	for(i=0;arr[i]!='\0';i++)
		freq[arr[i]]++;//freq[arr[0]] freq[A] 
		                 //freq[65]++
	for(i=0;i<256;i++)
	{
		if(freq[i]==1)
		{
		c++;
		printf("%c",i);
		}
	}
	printf("UNIQUE CHARACTER COUNT %d",c);
}
