/*
Program using nested loops that demonstrates the problem of representational error
Written by: Alec
Wirrten on: Nov 2018
Written in: C
Compilied with: gcc
Version 2.4.3
*/

#include <stdio.h>

int main(void){

//Define Variables
    double num, //Counts from 2 to 30
           tot, //adds the fractions together
           plu; //loop that counts first variable

//Loop for calcs
    for(num=2.0; num<=30.0; num++){ //for loop that determines which fractions to add
        for(plu=1.0; plu<=num; plu++){ //for loop that adds the fractions
                tot=1.0/num+tot; //formula that add fractions
        }
        if(tot==1){ //Prints tot if it is equal
                printf("%.0f / %.0f = 1\n", num, num);
        }
        else if(tot>1){ //Prints if tot is greater
                printf("%.0f / %.0f > 1\n", num, num);
        }
        else{ //Prints if other are not met
                printf("%.0f / %.0f < 1\n", num, num);
        }
        tot=0.0; //resets tot to 0
        }

    return 0;
}
