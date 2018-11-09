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
int count = 0;
int n = number;

//Ask user for input and reads it
printf("Enter the 12 digit barcode: \n");
scanf("%i", &n);

//Determines length of number
while (n != 0)
{
    n /= 10;
    cout++;
}

//Puts digits of number into array
if(count!=0){
   int numberArray[count];

   count = 0;
   n = number;

   while (n != 0){
       numberArray[count] = n % 10;
       n /= 10;
       count++;
   }
return 0;
}










return 0;
}
