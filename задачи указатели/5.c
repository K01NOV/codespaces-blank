#include <stdio.h>
#include <stdlib.h>

int main(){
    int* arr1;
    int* arr2;
    int size = 10;
    arr1 = (int*)calloc(size, sizeof(int));
    arr2 = (int*)calloc(size, sizeof(int));
    for(int i = 0; i < size; i++){
        arr1[i] = i + 1;
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for(int i = 0; i < size; i++){
        arr2[i] = arr1[i];
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}