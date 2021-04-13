#include <stdio.h>

int size = 8;
int sum;
int sumofelement(int arry[size] , int n);

int main()
{
    int Arr[size];
    int i;

    printf("Size of Array: %d\n", size);

    for (i = 0 ; i < size ; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &Arr[i]);
    }
    sumofelement(Arr , 0);

    printf("Sum elements: %d\n", sum);

    return 0;
}
int sumofelement(int arry[] , int n)
{
    sum+=arry[n];
    if (n==7){
        return (sum);
    }
    else{
        return sumofelement(arry , n + 1);
    }
}
