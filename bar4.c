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
int count = 0;
int n = number;

while (n != 0)
{
    n /= 10;
    cout++;
}

if(count!=0){
   int numberArray[count];

   count = 0;
   n = number;

   while (n != 0){
       numberArray[count] = n % 10;
       n /= 10;
       count++;
   }
}



return 0;
}
