#include<stdio.h>
int main(){
	char s1[100];
	char s2[100];
	scanf("%[^\n]s",s1);
	int n;
	scanf("%d",&n);
	scanf("%[^\n]s",s2);
	printf("%d",strcmp(s1,s2));
	
}