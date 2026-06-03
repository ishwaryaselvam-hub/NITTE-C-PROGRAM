//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=5;i++,printf("\n")){
//	for(j=1;j<=5;j++)
//	printf("hi");
//}
//}
//
//i/p            o/p 
//1              00
//               01
//               10 
//               11 
//2              00
//               01 
//               02
//               10 
//               11
//               12
//               20
//               21
//               22
//
//
//
//
//
//








//#include<stdio.h>
//int main()
//{
//	int n,i,j;
//	scanf("%d",&n);
//	for(i=0;i<=n;i++){
//	for(j=0;j<=n;j++)
//	printf("%d%d\n",i,j);
//}
//	
//}




//for (int i = 1; i <= 5; i++,printf("\n")) {
//    for (int j = 1; j <= i; j++) {
//        if (i * j % 2 == 0)
//            printf("*");
//    }
//}




//int x = 1;
//for (int i = 1; i <= 3; i++) {
//    for (int j = 1; j <= i; j++) {
//        x *= j;
//    }
//}
//printf("%d",x);


//for (int i = 1; i <= 3; i++) {
//    for (int j = 3; j >= i; j--) {
//       printf("%d ",i * j);
//    }
//}

#include<stdio.h>
int main(){

//for (int i = 1; i < 4; i++) //i=2
//{
//    for (int j = 1; j < 4; j++) //j=2
//	{
//        if (i == j)//2==2
//            break;
//        printf("%d,%d ",i ,j);
//    }
//}
//}





//for (int i = 1; i <= 3; i++) {
//    for (int j = 1; j <= 3; j++) {
//        if ((i + j) % 2 == 0)
//            printf("#");
//        else
//            printf("@");
//    }
//}
//}








//int sum = 0;
//for (int i = 1; i <= 5; i++) {
//    if (i % 2 == 0)
//        continue;
//    sum += i;
//}
//printf("%d",sum);
//}

int count = 0;
for (int i = 1; i <= 5; i++)
 {
    if (i == 3 || i == 4)
        continue;
    count += i;//1+2+5=8
}
printf("%d",count);
}


