#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	int n;
	scanf("%[^\n]s",s1);//AABCC
	scanf("%d",&n);//3
	strncpy(s2,s1,n);
	printf("%s",s2);//AAB
}