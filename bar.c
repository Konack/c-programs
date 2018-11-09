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
//Define Variables
    int n;
    int i;
    int d[10];
//Ask user for input and reads it
    printf("Enter the 12 digit barcode: \n");
    scanf("%i", &n);

    while (n>0)
    {
        d[i]=n%10;
        n/=10;
    }



printf("%d ", d[1]);


return 0;}
