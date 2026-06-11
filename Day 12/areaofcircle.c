#include<stdio.h>
union Circle
{
float  r,area;
};
int main()
{
union Circle a;
scanf("%f",&a.r);
float area;
a.area=3.14*a.r*a.r;
printf("Area of circle %.2f",a.area);	
}