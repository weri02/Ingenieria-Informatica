/*
* File: 05554_75554_22607_PAC5_PEC5_CAA5_20221_main.c
* Author: UOC
* Course: 20221
* Description: PAC5-PEC5-CAA5
*/

#include <stdio.h>
#include <string.h>

#define FIREFIGHTER_WEIGHT 90
#define MAX_NAME 15+1

typedef struct {
	char modelName[MAX_NAME];
    int powerEngine;
	float weight;
	float tankVolume;
	int seats;    
} tFireTruck;

int main(int argc, char **argv)
{
	/* Definition of variables */
    tFireTruck truck1;
    tFireTruck truck2;
	
	float maxWeightTruck1 = 0.0;
	float maxWeightTruck2 = 0.0;
	
	char bestModel[MAX_NAME];
	
	/* Input data */
    printf("INPUT\n");	
	
	/* Truck 1*/
	printf("TRUCK 1\n");
	printf("MODEL NAME?\n");
    scanf("%s", truck1.modelName);
    printf("POWER ENGINE (350-550 HP)?\n");
    scanf("%d", &truck1.powerEngine);
    printf("WEIGHT (9000-11500 KG)?\n");
    scanf("%f", &truck1.weight);
	printf("TANK VOLUME (2500-3500 L)?\n");
    scanf("%f", &truck1.tankVolume);
	printf("SEATS (5-7)?\n");
    scanf("%d", &truck1.seats);
	
	/* Truck 2*/
	printf("TRUCK 2\n");
	printf("MODEL NAME?\n");
    scanf("%s", truck2.modelName);
    printf("POWER ENGINE (350-550 HP)?\n");
    scanf("%d", &truck2.powerEngine);
    printf("WEIGHT (9000-11500 KG)?\n");
    scanf("%f", &truck2.weight);
	printf("TANK VOLUME (2500-3500 L)?\n");
    scanf("%f", &truck2.tankVolume);
	printf("SEATS (5-7)?\n");
    scanf("%d", &truck2.seats);
	
	/* Data Processing */
	maxWeightTruck1 = truck1.weight + truck1.tankVolume + (float)(truck1.seats * FIREFIGHTER_WEIGHT);
	maxWeightTruck2 = truck2.weight + truck2.tankVolume + (float)(truck2.seats * FIREFIGHTER_WEIGHT);	
	
	if (maxWeightTruck1 / (float)truck1.powerEngine < maxWeightTruck2 / (float)truck2.powerEngine) {
		strcpy(bestModel, truck1.modelName);		
	} else {
		if (maxWeightTruck1 / (float)truck1.powerEngine > maxWeightTruck2 / (float)truck2.powerEngine) {
			strcpy(bestModel, truck2.modelName);			
		} else {
			if (truck1.tankVolume >= truck2.tankVolume) {
				strcpy(bestModel, truck1.modelName);
			} else{			
                strcpy(bestModel, truck2.modelName);				
			}
		}
	}
	/* Output results */
    printf("OUTPUT\n");
    printf("THE SELECTED MODEL IS %s\n", bestModel);
	return 0;
}
