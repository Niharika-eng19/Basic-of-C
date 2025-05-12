#include<stdio.h>
int main(){
        
    // RIGHT ANGLE TRIANGLE------------------------------------------------
        /*int rows, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++) {
            for (j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }*/

    
    //INVERTED RIGHT ANGLE TRIANGLE----------------------------------------
            
        /*int rows, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        for (i = rows; i >= 1; i--) {
            for (j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }*/

    // PYRAMID PATTERN-----------------------------------------------------
        
        /*int rows, i, j, space;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++) {
            for (space = 1; space <= rows - i; space++) {
                printf("  ");
            }
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }*/

    // DIAMOND PATTERN-----------------------------------------------------

        /*int rows, i, j, space;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        // Upper half of diamond
        for (i = 1; i <= rows; i++) {
            for (space = 1; space <= rows - i; space++) {
                printf("  ");
            }
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
        // Lower half of diamond
        for (i = rows - 1; i >= 1; i--) {
            for (space = 1; space <= rows - i; space++) {
                printf("  ");
            }
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }*/


    
        return 0;
    }
       
        
   