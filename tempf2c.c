/*
Program for calculating conversion of Fahrenheit to Celcius
Written by: Alec
Wirrten on: Sept 2018
Written in: C
Compilied with: gcc
Version 1.0.0
*/

#include <stdio.h>

int main(void){
    double fah,cel; //defines the variables
    printf("Enter the temperature in degrees Fahrenheit: "); //Shows the user what I want the user to input
    scanf("%lf", &fah); //Reads what the user has input to the program
    cel=5.0/9.0*(fah-32.0); //Does the mathmatical conversion from Fahrenheit to Celcius
    printf("Fahrenheit: %.2lf\nCelcius: %.2lf\n",fah,cel); //Shows the final conversion results to the user
return 0;
}
