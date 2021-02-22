#include <stdio.h>
#include <stdlib.h>

int addgrades();

int totalsum;

int main()
{
    int sum;
    int avg;

    addgrades();

    avg = totalsum / 5;

    printf("\nYour average grade is %d\n\n", avg);

    return 0;
}

int addgrades()
{
    int g1 , g2 , g3 , g4 , g5;


    printf("Please Enter the grade number 1: ");
    scanf("%d", &g1);

    printf("\nPlease Enter the grade number 2: ");
    scanf("%d", &g2);

    printf("\nPlease Enter the grade number 3: ");
    scanf("%d", &g3);

    printf("\nPlease Enter the grade number 4: ");
    scanf("%d", &g4);

    printf("\nPlease Enter the grade number 5: ");
    scanf("%d", &g5);

    totalsum = g1 + g2 + g3 + g4 + g5;


    return totalsum;

}

