#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    printf("\n\nNAME ANAS SABBAG \n ROLLNO 1901430120006 CSE \n ");
    printf("\n\n /***** TRUTH TABLE OF AND OR NOT *****/ \n");
    printf("\tAND and OR truth table:\n");
    printf("\t _______________________________________________________________________________\n");
    printf("\t|   A\t|B\t\t|AND operator(RESULT)\t\t|OR operator(RESULT)    |");
    for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                                          printf("\n\t|_______|_______________|_______________________________|_______________________|");
                printf("\n\t|   %d\t|%d\t\t|%d\t\t\t\t|%d\t\t\t|",i,j,(i&&j),(i||j));
            }
    }
    printf("\n\t|_______|_______________|_______________________________|_______________________|");
    printf("\n\n");
    printf("\tNOT truth table:\n");
    printf("\t _____________________________________\n");
    printf("\t|   A\t\t|NOT operator(RESULT) |");
    for(i = 0; i < 2; i++){
            printf("\n\t|_______________|_____________________|\n");
            printf("\t|   %d\t\t|%d \t\t      |",i,(!i));
    }
    printf("\n\t|_______________|_____________________|\n");
    return 0;
}
