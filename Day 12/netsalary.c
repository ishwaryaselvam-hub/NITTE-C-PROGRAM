#include<stdio.h>
struct Emp
{
	int id;
	char name[20];
	double basic,hra,da,net;
};
int main()
{
	struct Emp e1,e2;
	scanf("%d%d",&e1.id,&e2.id);
	scanf("%s%s",e1.name,e2.name);
scanf("%lf%lf%lf",&e1.basic,&e1.hra,&e1.da);
scanf("%lf%lf%lf",&e2.basic,&e2.hra,&e2.da);
e1.net=e1.basic+e1.hra+e1.da;
e2.net=e2.basic+e2.hra+e2.da;
printf("--------------------------------\n");
printf("------salary details------------\n");
printf("--------------------------------\n");
printf("EMP ID           : %d\n",e1.id);
printf("EMP NAME         : %s\n",e1.name);
printf("EMP Basic Salary : %.2lf\n",e1.basic);
printf("EMP HRA Salary   : %.2lf\n",e1.hra);
printf("EMP DA Salary    : %.2lf\n",e1.da);
printf("EMP NET Salary   : %.2lf\n",e1.net);
printf("EMP ID           : %d\n",e2.id);
printf("EMP NAME         : %s\n",e2.name);
printf("EMP Basic Salary : %.2lf\n",e2.basic);
printf("EMP HRA Salary   : %.2lf\n",e2.hra);
printf("EMP DA Salary    : %.2lf\n",e2.da);
printf("EMP NET Salary   : %.2lf\n",e2.net);
printf("--------------------------------\n");
printf("--------------------------------");
}