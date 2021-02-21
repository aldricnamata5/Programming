#include <stdio.h>

int main()
{
    int average;
    int G1 , G2 , G3 , G4 , G5;
    printf("\nPlease enter the 1st grade: ");
    scanf("%d", &G1);
    printf("\nPlease enter the 2nd grade: ");
    scanf("%d", &G2);
    printf("\nPlease enter the 3rd grade: ");
    scanf("%d", &G3);
    printf("\nPlease enter the 4th grade: ");
    scanf("%d", &G4);
    printf("\nPlease enter the 5th grade: ");
    scanf("%d", &G5);
    average = (G1 + G2 + G3 + G4 + G5)/5;

    printf("\nThe total sum of all grades is %d\n", average);


    return 0;
}

