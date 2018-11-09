/*
Program to calculate the body mass index (BMI)
Written by: Alec
Wirrten on: Oct 2018
Written in: C
Compilied with: gcc
Version 1.8.1
*/

#include <stdio.h>

int main(void){

//Defines variables
//lbs = user weight | tli = user height in inches | bmi = body mass index | tlf = user height in feet
    double lbs, tll, bmi, tli;
    printf("**********************************\n* Welcome to the BMI Calculator. *\n**********************************"); //formatting
//Ask for user input and reads it
    printf("\nPlease enter your weight in pounds (example: 130.4)\n");
    scanf("%lf", &lbs);
    printf("\nPlease enter your height in pounds \n(example: 71)\n");
    scanf("%lf", &tli);

//BMI formula
    bmi = ( lbs / (double)(tli * tli) ) * 703;

//If/else statement to device what weight category the person belongs in
    printf("**********************************\n"); //formatting
    if (bmi < 18.5) {
            printf("BMI: %.1f\nStatus: Underweight\n",bmi);
    } else if (bmi < 25.0) {
        printf("BMI: %.1f\nStatus: Normal\n",bmi);
    } else if (bmi < 30.0) {
            printf("BMI: %.1f\nStatus: Overweight\n",bmi);
    } else if (bmi >=30.0) {
        printf("BMI: %.1f\nStatus: Obese\n",bmi);
    }
    printf("**********************************\n"); //formatting
}
