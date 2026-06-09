//#include<stdio.h>
//int main()
//{
//	char arr[5];
//	scanf("%s",arr);
//	printf("%s",arr);
//}





#include<stdio.h>
int main()
{
	char arr[5];
	scanf("%[^\n]s",arr);
	printf("%s",arr);
}