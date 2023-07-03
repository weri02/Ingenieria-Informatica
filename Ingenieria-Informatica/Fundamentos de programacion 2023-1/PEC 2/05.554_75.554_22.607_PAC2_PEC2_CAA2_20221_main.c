/*
* File: 05.554_75.554_22.607_PAC2_PEC2_CAA2_20221_main.c
* Author: UOC
* Course: 20221
* Description: PEC2-PAC2-CAA2
*/

/* System header files */
#include <stdio.h>
#include <stdbool.h>

#define TOTAL_FIREFIGHTERS 10
#define MIN_PCT_FIREFIGHTERS 20  /* Minimum percentage of firefighters for support */ 

typedef enum {FIRE_HOUSE, CAR_CRASH, OTHERS} tAlarmType;

int main(int argc, char **argv)
{
    /* Definition of variables */
    tAlarmType alarmType;
    int numVictims;
    int numFirefighters;
    bool isAlarmAttended;
    
    /* Input data */
    printf("INPUT\n");
    printf("ALARM TYPE (0-FIRE HOUSE, 1-CAR CRASH, 2-OTHERS)?\n");
    scanf("%u", &alarmType);
    printf("NUMBER OF VICTIMS?\n");
    scanf("%d", &numVictims);
    printf("NUMBER OF FIREFIGTHERS REQUIRED?\n");
    scanf("%d", &numFirefighters);  
    
    /* Expresions */
    isAlarmAttended = (alarmType == FIRE_HOUSE || alarmType == CAR_CRASH) && numVictims > 0 
        && TOTAL_FIREFIGHTERS - numFirefighters >= TOTAL_FIREFIGHTERS * MIN_PCT_FIREFIGHTERS / 100;
    
    /* Output results */
    printf("OUTPUT\n");
    printf("THE ALARM IS ATTENDED (0-FALSE, 1-TRUE): %d\n", isAlarmAttended);
    
    return 0;
}