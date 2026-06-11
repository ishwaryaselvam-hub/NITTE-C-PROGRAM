#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	scanf("%[^\n]s",s1);//abc
	int n;
	scanf("%d",&n);
	scanf("%[^\n]s",s2);//xyz
	strcat(s1,s2);
	printf("%s",s1);
}