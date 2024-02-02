// Write a C program to create a simple Calculator using switch case statement. 
// The user should be able to provide two integers as input and the allowed 
// operaƟons are +, -, * and /.
#include<stdio.h>
void main()
{
    int a,b,ch;
    printf("\nEnter two numbers = ");
    scanf("%d %d",&a,&b);
    printf("\n1.+\n2.-\n3.*\n4./\nEnter choice = ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\n %d + %d = %d",a,b,a+b);
            break;
        case 2:
            printf("\n %d - %d = %d",a,b,a-b);
            break;
        case 3:
            printf("\n %d * %d = %d",a,b,a*b);
            break;
        case 4:
            printf("\n %d / %d = %d",a,b,a/b);
            break;
        default:
            printf("\nInvalid choice");
            break;
    }
}