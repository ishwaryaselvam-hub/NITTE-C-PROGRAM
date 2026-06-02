#include<stdio.h>
int main()
{
      int n,s=0;
      scanf("%d",&n);//14
      while(n)//0
      {
      	if(n%2==0)//1%2==0
      	n=n/2;//2/2=1
      	else 
      	n=n-1;//1-1=0
      	s++;//s=6
	  }
	  printf("%d",s);
}