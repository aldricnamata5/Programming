#include<stdio.h>
#include<conio.h>

int main(){
    int number = 18;
    int age;
    char name[20];

    printf("Please enter your name: ");
    scanf("%[^\n]", name);

    printf("Please enter your age: ");
    scanf("%d", &age);


     if(age>number){
        printf("\nYou are qualified\n");
     }
     if(age<number){
        printf("\nYou are not qualified\n");
     }
     if(age==number){
        printf("\nYou are qualified\n");
     }


    return 0;
}




