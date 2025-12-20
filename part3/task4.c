#include <stdio.h>

int min(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);
    int num[size];
    printf("enter a bunch of numbers: ");

    for(int i = 0; i < size; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(num[j] != num[i]){
                printf("min is %d\n", min(num, size));
                return 0;
            }
        }
    }

    printf("all numbers are equal\n");

    return 0;
}

