// Write a C program to print day of week using switch-case. An integer input will 
// be given by the user where 1 means Monday, 2 means Tuesday and so on. If 
// input lies outside 1 to 7, print “incorrect input”. 
#include<stdio.h>
void main()
{
    int d,ch;
    printf("\nEnter a number \n1:Monday\n2:Tuesday\n3:Wednesday\n4:Thursday\n5:Friday\n6:Saturday\n7.Sunday\nEnter a choice = ");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nInvalid input");
            break;
        
    }

}