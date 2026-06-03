55555 -base 1
#include<stdio.h>
int main()
{
	int col,row,n;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n")){
	for(col=0;col<n;col++)
	printf("*");
}
}
//base 2 -12345
n=4
*
**
***
****
row     col       col<=row
0        0
1        0 1 
2        0 1 2 
3        0 1 2 3 

//#include<stdio.h>
//int main()
//{
//	int col,row,n;
//	scanf("%d",&n);
//	for(row=0;row<n;row++,printf("\n")){
//	for(col=0;col<=row;col++)//
//	printf("*");
//}
//}
//base 3 pattern 
n=4 
****
***
**
*

row    col          n=4  col<n-row    
0      0 1 2 3     4-0=4
1      0 1 2       4-1=3
2      0 1         4-2=2
3      0           4-3=1

//
//#include<stdio.h>
//int main()
//{
//	int col,row,n;
//	scanf("%d",&n);
//	for(row=0;row<n;row++,printf("\n")){
//	for(col=0;col<n-row;col++)
//	printf("*");
//}
//}
//
//
//
n=5 
*
***
*****
******

row       col               n=5    col<2*row-1
0                         2*0-1=-1
1          1              2*1-1=1           
2          1 2 3          2*2-1=3
3          1 2 3 4 5      2*3-1=5
4          1 2 3 4 5 6 7  2*4-1=7


#include<stdio.h>
int main()
{
	int col,row,n;
	scanf("%d",&n);
	for(row=0;row<n;row++,printf("\n")){
	for(col=0;col<2*row-1;col++)
	printf("*");
}
}

