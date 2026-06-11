#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	scanf("%[^\n]s",s1);//abc
	int n1;
	scanf("%d",&n1);
	scanf("%[^\n]s",s2);//xyz
	int n;
	scanf("%d",&n);
	strncat(s1,s2,n);
	printf("%s",s1);
}