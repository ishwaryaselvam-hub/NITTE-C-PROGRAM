//#include<stdio.h>
//int main()
//{
//	int i,c=0;
//	char arr[100];
//	scanf("%[^\n]s",arr);
//	for(i=0;arr[i]!='\0';i++)
//	{
//if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||
//arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||
//arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||
//arr[i]=='U')
//c++;	
//	}
//	printf("%d",c);
//}



#include<stdio.h>
int main()
{
	int i,c=0;
	char arr[100];
	scanf("%[^\n]s",arr);
	for(i=0;arr[i]!='\0';i++)
	{
if(!(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||
arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||
arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||
arr[i]=='U'))
c++;	
	}
	printf("%d",c);
}