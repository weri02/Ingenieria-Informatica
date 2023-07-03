/*
* File: 05.554_75.554_22.607_PAC3_PEC3_CAA3_20221_main.c
* Author: UOC
* Course: 20221
* Description: PAC3-PEC3-CAA3
*/
#include <stdio.h>
#include <stdbool.h>

#define MIN_ELEMS 2
#define MAX_ELEMS 3

int main(int argc, char **argv)
{
    /* Definition of variables */
    int matrix2x2[MIN_ELEMS][MIN_ELEMS];
    int matrix3x3[MAX_ELEMS][MAX_ELEMS];
    
    int positiveDiagonal = 0;
    int negativeDiagonal = 0;
    int determinant = 0;
    
    int size = 0;
        
    /* Input data */
    printf("INPUT\n");
    printf("SIZE (2-3)?\n");    
    scanf("%d", &size);
    
    if (size == MIN_ELEMS || size == MAX_ELEMS) {
        
        if (size == MIN_ELEMS ) {
            /* MATRIX 2x2 Values */
            printf("POSITION(0,0)?\n");
            scanf("%d", &matrix2x2[0][0]);
            printf("POSITION(0,1)?\n");
            scanf("%d", &matrix2x2[0][1]);
            
            printf("POSITION(1,0)?\n");
            scanf("%d", &matrix2x2[1][0]);
            printf("POSITION(1,1)?\n");
            scanf("%d", &matrix2x2[1][1]);
            
            /* Diagonals calculation */
            positiveDiagonal = matrix2x2[0][0] * matrix2x2[1][1];
            negativeDiagonal = matrix2x2[0][1] * matrix2x2[1][0];       
        } 
        else {  
            /* MATRIX 2x2 Values */
            printf("POSITION(0,0)?\n");
            scanf("%d", &matrix3x3[0][0]);
            printf("POSITION(0,1)?\n");
            scanf("%d", &matrix3x3[0][1]);  
            printf("POSITION(0,2)?\n");
            scanf("%d", &matrix3x3[0][2]);
            
            printf("POSITION(1,0)?\n");
            scanf("%d", &matrix3x3[1][0]);
            printf("POSITION(1,1)?\n");
            scanf("%d", &matrix3x3[1][1]);
            printf("POSITION(1,2)?\n");
            scanf("%d", &matrix3x3[1][2]);
            
            printf("POSITION(2,0)?\n");
            scanf("%d", &matrix3x3[2][0]);
            printf("POSITION(2,1)?\n");
            scanf("%d", &matrix3x3[2][1]);      
            printf("POSITION(2,2)?\n");
            scanf("%d", &matrix3x3[2][2]);
            
            /* Diagonals calculation */
            positiveDiagonal = matrix3x3[0][0] * matrix3x3[1][1] * matrix3x3[2][2] + matrix3x3[0][1] * matrix3x3[1][2] * matrix3x3[2][0] + matrix3x3[0][2] * matrix3x3[1][0] * matrix3x3[2][1];
            negativeDiagonal = matrix3x3[0][2] * matrix3x3[1][1] * matrix3x3[2][0] + matrix3x3[0][0] * matrix3x3[1][2] * matrix3x3[2][1] + matrix3x3[0][1] * matrix3x3[1][0] * matrix3x3[2][2];
        }
        /* Data Processing */
        /* Determinant calculation */
        determinant = positiveDiagonal - negativeDiagonal;
        
        /* Output results */
        printf("OUTPUT\n");
        printf("RESULT: %d\n", determinant);            
    }
    else {  
        /* Invalid size */
        printf ("INVALID VALUE\n");     
    }
    return 0;
}
