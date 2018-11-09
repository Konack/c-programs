/*
Program to determine how many slices of pizza are left
Written by: Alec
Wirrten on: Oct 2018
Written in: C
Compilied with: gcc
Version 1.0.1
*/

#include <stdio.h>
int main(void){
//Defines Variables
    int n;
    int c;
    int digits[13];
//Ask user for input and reads it
    printf("Enter the 12 digit barcode: \n");
    scanf("%i", &n);





//Loop to pull numbers from int to array
for (int i = 12; i >= 0; i--)
{
    digits[i] = n % 10;
    n = n / 10;
}





return 0;}
