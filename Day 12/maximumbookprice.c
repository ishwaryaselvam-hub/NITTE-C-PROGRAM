#include<stdio.h>
#include<limits.h>
struct Book
{
	int id;
	char name[10];
	float p;
};
int main()
{
	int n,i;
	float max=0;
	scanf("%d",&n);
	struct Book b[n];
	for(i=0;i<n;i++)
		{
		scanf("%d",&b[i].id);
		scanf("%s",b[i].name);
		scanf("%f",&b[i].p);
		if(b[i].p>max)
		max=b[i].p;
	}
printf("Maximum price of Book %.2f",max);
}