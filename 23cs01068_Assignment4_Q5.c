// Write a C program that takes 3 digit number input from the user and find 
// whether it is an Armstrong number or not. An Armstrong number of three 
// digits is an integer such that the sum of the cubes of its digits is equal to the 
// number itself. Print "Yes" if it is an Armstrong number else print "No". If input 
// lies outside 100 to 999, print “incorrect input”. NOTE: 371 is an Armstrong 
// number since 3^3 + 7^3 + 1^3 = 371
#include<stdio.h>
void main()
{
    int n;
    int i,s=0;


    printf("\nEnter a three digit number = ");
    scanf("%d",&n);
    int m=n;
    if(n<100 || n>999) printf("\nIncorrect input");
    else
    {
        for(i=1;n!=0;i++)
       {
            s+=(n%10)*(n%10)*(n%10);
            n/=10;
       } 
       if(s==m) printf("\nIt is a armstrong number");
       else printf("\nIt is not a armstrong number");
    }
}