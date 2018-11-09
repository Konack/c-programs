/*
Program for 
Written by: Alec
Wirrten on: Oct 2018
Written in: C
Compilied with: gcc
Version 1.0.0
*/

#include <stdio.h>

int main(void){
//Variables
    long n, //Number
         d, //digit
         s = 0; //sum
    int  i,
         c=0;
//Ask user to input data and assigns it to variable
    printf("Enter a whole number of your choice: ");
    scanf("%ld", &n);

//Primex
  /*logic*/  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("n is a Prime number");
  }
  else {
  printf("n is not a Prime number");
  }
return 0;
}
