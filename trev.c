#include <stdio.h>
#include <math.h>

      /*
        Purpose: To calculate someone's BMI
        Written by: Trevor Reese
        Language: C
        Compiler: gcc
        Date created: October 1st, 2018
        Version: 1.0.0
        Date last modified:October 1st
      */

int main(void)
{
        double  h,      //height of the person
                w,      //weight of the person
                bmi;    //body mass index

        printf("Enter the height of the person in inches: ");
        scanf("%lf" ,&h);
        printf("Now enter the weight of the person in pounds: ");
        scanf("%lf" ,&w);

        bmi=(703*w)/pow(h,2);
        printf("The person's height in inches is: %8.1lf\n", h);
        printf("The person's weight in pounds is: %8.1lf\n", w);
        printf("The person's BMI is: %8.1lf\n", bmi);

        if(bmi<18.5){
                printf("Status: Underweight");
        }
        else if(bmi<25.0){
                printf("Status: Normal");
        }
        else if(bmi<30.0){
                printf("Status: Overweight");
        }
        else if(bmi>=30.0){
                printf("Status: Obese");
        }



return 0;
}
