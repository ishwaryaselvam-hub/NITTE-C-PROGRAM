//n=5 
//1            
//2 4
//1 3 5 
//2 4 6 8 
//1 3 5 7 9
#include<stdio.h>
int main()
{
	int n,row,col,c;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n"))
	{
		if(row%2==0)
		c=1;
		else 
		c=2;
		for(col=0;col<=row;col++){
		printf("%d",c);
		c+=2;
	}
}
}