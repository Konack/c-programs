/*
Program for 
Written by: Alec
Wirrten on: Oct 2018
Written in: C
Compilied with: gcc
Version 1.0.0
*/

#include <stdio.h>
#include <math.h>

int main(void){
//Defines variables
int n;
//.int count = 0;
//.int n = number;

//Ask user for input and reads it
    printf("Enter the 12 digit barcode: \n");
    scanf("%i", &n);

//Puts digits of number into array
   int array[13];

//.   count = 0;
//.   n = number;

   while (n != 0){
       array[13] = n % 10;
       n /= 10;
       count++;
    printf("Digit 1 is  %i", array[1]);





return 0;
}










return 0;
}
