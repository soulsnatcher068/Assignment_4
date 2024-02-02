// Write a program that calculates the interest rate on a credit card balance. The 
// interest rate is determined by the credit score: 15% for scores below 600, 12% 
// for scores between 600 and 750, and 10% for scores above 750. The input is 
// the credit score and the current balance. The output should be the calculated 
// interest. 
#include<stdio.h>
void main()
{
    double cs,cb,inr;
    printf("\nEnter Credit score and credit balance = ");
    scanf("%lf %lf",&cs,&cb);
    //interest rates
    if(cs<600) inr=0.15*cb;
    else if(cs>=600 && cs<=750) inr=0.12*cb;
    else if (cs>750) inr=0.1*cb;
    else printf("\nInvalid credit score");
    printf("\nThe total interest on the balance is = %lf",inr);
}