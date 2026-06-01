#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
    switch(ch)
    {
    	case 'S':
    		printf("Sunday");
    		break;
    	case 'M':
    		printf("Monday");
    		break;
    	case 'T':
    		printf("Tuesday");
    		break;
    	case 'W':
    		printf("Wednesday");
    		break;
    	default:
    		printf("Invalid Input");
    	
	}
}