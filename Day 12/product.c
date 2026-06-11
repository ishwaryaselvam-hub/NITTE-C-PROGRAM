#include<stdio.h>
struct Product 
{
	int id;
	char name[10];
	float price;	
};
int main()
{
	int n,i;
	float sum=0;
	scanf("%d",&n);
	struct Product p[n];
	for(i=0;i<n;i++)
    {
    	scanf("%d",&p[i].id);
    	scanf("%s",p[i].name);
    	scanf("%f",&p[i].price);
    	sum=sum+p[i].price;
	}
	printf("%.2f",sum);
}
