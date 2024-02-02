// Write a C program that takes an integer input from the user and determines 
// whether the entered number is even or odd using switch case. Note: you are 
// not allowed to use if-else statement.
#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter the number = ");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
            printf("\n%d is even",n);
            break;
        default:
            printf("\n%d is odd",n);
            break;
    }
}