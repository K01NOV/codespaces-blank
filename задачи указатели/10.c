#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* allocateArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    return arr;
}

int main() {
    srand(time(NULL));

    int size; 
    int* array;
    printf("Enter size of an array: ");
    scanf("%d", &size);

    array = allocateArray(size);

    for(int i = 0; i < size; i++){
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }

    printf("\n");

    free(array);

    return 0;
}