//#include<stdio.h>
//int main()
//{
//	int n,i,len=0;
//	scanf("%d",&n);
//	char str[n];
//	scanf("%[^\n]s",str);//hello
//	for(i=0;str[i]!='\0';i++)//str[0]=h!='
//	len++;
//	printf("%d",len);
//	
//}





#include<stdio.h>
#include<string.h>
int main()
{

	char str[100];
	scanf("%[^\n]s",str);//hello
	printf("%d",strlen(str));
	
}  