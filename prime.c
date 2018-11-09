/*
Program for 
Written by: Alec
Wirrten on: Oct 2018
Written in: C
Compilied with: gcc
Version 2.1.4
*/

#include <stdio.h>

int main(void){
//Variables
    long n, //Number
         n2, //Copy of n
         d, //digit
         s=0; //sum
    int  i,
         c=0;

//Ask user to input data and assigns it to variable
    printf("Enter a whole number of your choice: ");
    scanf("%ld", &n);
    n2=n; //Saves n for use later, changes in //Sum, this is a work around

//Multiples /Checks if they are mulitples of the numbers below
    if(n%7==0) {
        printf("\n%ld is a mutiple of 7.",n);
    }
    else {
    printf("\n%ld is not mutiple of 7.",n);
    }
    if(n%11==0) {
        printf("\n%ld is a mutiple of 11.",n);
    }
    else {
    printf("\n%ld is not mutiple of 11",n);
    }
    if(n%13==0) {
        printf("\n%ld is a mutiple of 13.",n);
    }
    else {
    printf("\n%ld is not mutiple of 13.",n);
    }

//Sum of Digits /adds individual digits together
    while (n>0)
    {
        d=n%10;
        s=s+d;
        n/=10;
    }
    printf("\n%ld is the Sum of the digits.\n",s);
    if(s % 2 == 0)
        printf("%ld is even.\n", s);
    else
        printf("%ld is odd.\n", s);

//Prime /Checks if number is prime or not
    n = n2; //Sets n back to its original value /gets changed in //Sum
    for (i=1; i<=n; i++) {
      if (n%i==0) {
         c++;
      }
    }

    if (c==2) {
    printf("%ld is a Prime number.\n",n);
    }
    else {
    printf("%ld is not a Prime number.\n",n);
    }
  return 0;
}
