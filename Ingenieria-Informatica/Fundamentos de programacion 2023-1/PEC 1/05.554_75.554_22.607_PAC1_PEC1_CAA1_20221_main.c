/*
* File: 05.554_75.554_22.607_PAC1_PEC1_CAA1_20221_main.c
* Author: UOC
* Course: 20221
* Description: PEC1-PAC1-CAA1
*/

/* System header files */
#include <stdio.h>

/* User defined constants */
#define TANK_CAPACITY 3500.0  /* Liters */

/* Main function */
int main(int argc, char **argv)
{
    /* Definition of variables */
    int outputflow;
    float workingTime;
    
    /* Input data */
    printf("INPUT\n");
    printf("FLOW?\n");
    scanf("%d", &outputflow);
    
    /* Calculations */      
    workingTime = TANK_CAPACITY / (float)outputflow;

    /* Output results */
    printf("OUTPUT\n");
    printf("WORKING TIME: %.2f\n", workingTime);
    
    return 0;
}
