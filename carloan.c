/*
Purpose: To help you figure out what
your monthly payment will be, given the car's purchase
price, the monthly interest rate, and the time period
over which you will pay back the loan.

Written by: Alec
Wirrten on: Sept 2018
Written in: C
Compilied with: gcc
Version 1.2.3
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double p; //p = principal (the amount borrowed)
    double i; //i = monthly interest rate (1/12 of the annual rate with 1% expressed as .01)
    double n; //n = total number of payments
    double a; //final answer after calc
    printf("***************************************\n* Welcome to the Car Loan Calculator. *\n***************************************"); //formatting
    printf("\n\nEnter the amount you wish to borrow: "); //asking for p
    scanf("%lf", &p); //obtains a value for p from the user
    printf("\nEnter your annual interest rate (E.g. For 1 percent input 1): "); //asking for i
    scanf("%lf", &i); //obtains a value for i from the user
    printf("\nEnter the total number of payments in months\n(typically 36, 48, or 60, representing three,four, or five years respectively): "); //asking for n
    scanf("%lf", &n);// obtains a value for n from the user
    i = (i/1200); //converts interest to annual rate
    a = ((i + (i/(pow(1+i, n) - 1))) * p); //formula for loan
    i = (i*1200); //reverts rate to monthly
    n = (n/12); //converts months to years
    printf("\n***************************************"); //useless formatting
    printf("\nYour monthly payment is: %.2f", a); //shows final answer for remaing print lines
    printf("\nInterest rate: %.2f", i);
    printf("\nPayment length: %.2f years", n);
    printf("\nLoan amount: %.2f", p);
    printf("\n***************************************\n"); //useless formatting
return 0;
}
