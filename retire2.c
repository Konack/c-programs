/*
Program for calculate a retirement plan
Written by: Alec
Wirrten on: Oct 2018
Written in: C
Compilied with: gcc
Version 2.0.1
*/

#include <stdio.h>
int main(void){
//Defines Varialbes
    double /*sec 2|initial starting salary*/iss,
           /*projected annual salary increase*/paps,
           /*percentage of salary to be contributed to the retirement plan*/ pscrp,
           /*annual rate of return on the accumulation (the earnings)*/ arra,
           /*sec 1|year in which contributions will start*/ ycs,
           /* year in which contributions will end*/ yce,
           /*total number of years*/ tny,
           /*total number of lines*/ tnl,
           /*lines in current section*/ lcs,
           /*sections of 24*/ s24,
           /*new year*/ ny,
           /*sec 3 |Starting Salary */ ss,
           /*sec 5 |arra earnings*/ ae,
           /*sec 4 |pscrp contributions*/ pc,
           /*sec 6 | closing (contrib+earnings)*/ cl,
           /*year count*/ yc,
           /*yes or no*/ yn;
//Ask user to input data and assigns it to variables
    printf("Enter the initial starting salary\n(exmaple: 40000): ");
    scanf("%lf", &iss);
    printf("\nEnter the projected annual percentage salary increase\n(for exmaple write 4 percent as: 4): ");
    scanf("%lf", &paps);
    printf("\nEnter the percentage of salary to be contributed to the retirement plan\n(for example write 10 percent as: 10): ");
    scanf("%lf", &pscrp);
    printf("\nEnter the annual rate of return on the accumulation (earnings)\n(for example write 5 percent as: 5): ");
    scanf("%lf", &arra);
    printf("\nEnter the year in which contributions will start\n(exmaple: 2014): ");
    scanf("%lf", &ycs);
    printf("\nEnter the year in which contributions will end\n(exmaple: 2016): ");
    scanf("%lf", &yce);
//Maths
    tny=yce-ycs; //gets total number of years
    paps=paps/100+1; //makes paps into usable format
    pscrp=pscrp/100;
    arra=arra/100;
    ae=0;
    ny=ycs; //makes ny ycs so it can be used later
    ss=0; //sets ss to 0
    yc=tny+ycs; //adds total number of years want to starting year
//printf("%f",pscrp);
//printf("before adding %f",pc);
//Header
    printf("Year Salary Starting Contribution Earnings Closing\n");
//For loop
    for ( ycs ; ycs<=yc; ycs++) {
       pc=iss*pscrp;
       ss=cl;
       cl=pc+ae+cl;
       printf("%.0f %.2f %.2f %.2f %.2f %.2f\n",ycs ,iss ,ss ,pc ,ae ,cl);
       ycs+1;
       iss=iss*paps;
       ae=pc*arra+ae;
}




return 0;
}
