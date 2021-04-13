#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arry[2][3] = {
    {111 , 222 , 333},
    {444 , 555 , 666}
    };
    int id  , pin;
    int i , v=0 ;

    printf("Enter ID Number: ");
    scanf("%d", &id);
    printf("Enter PIN Number: ");
    scanf("%d", &pin);

    for(i=0; i<3; i++){
        if (id == arry[0][i] && pin == arry[1][i]){
            v = 1;
            if(v == 1 ){

       printf("You have successfully logged In");
        printf("\nID#: %d\n\n", arry[0][i]);
    }
    }
    }
    if (v==0){
        printf("You have an invalid ID/PIN \n");
    }

    return 0;
}






