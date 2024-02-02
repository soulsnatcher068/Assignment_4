// Write a program for a theme park that calculates ticket prices based on age 
// groups. Children under 5 enter for free, ages 5-12 have a child rate of 20, ages 
// 13-59 have a standard rate of 50, and seniors 60 and above have a discount of 
// 20% on the standard rate. The input is the age, and the output is the ticket 
// price 
#include<stdio.h>
void main()
{
    int age;
    printf("\nEnter the age of visitor = ");
    scanf("%d",&age);
    if(age<5) printf("\nEntry is free\nTicket price = %d",0);
    else if(age>=5 && age<=12) printf("\nTicket price = %d",20);
    else if (age>=13 && age<=59) printf("\nTicket price = %d",50);
    else printf("\nTicket price = %lf",50-0.2*50);

}