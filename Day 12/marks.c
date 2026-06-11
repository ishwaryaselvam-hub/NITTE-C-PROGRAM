#include<stdio.h>
struct Marks
{
	int id;
	char name[20];
	float m1,m2,m3,avg;
};
int main()
{
	scanf("%d",&s1.id);
	scanf("%s",s1.name);
	scanf("%f%f%f",&s1.m1,&s1.m2,&s1.m3);
	s1.avg=(s1.m1+s1.m2+s1.m3)/3;
	printf("student id: %d\n",s1.id);
	printf("student Name: %s\n",s1.name);
	printf("Average of Marks :%.2f",s1.avg);
}