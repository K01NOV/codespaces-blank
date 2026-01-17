#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int size; 
    int* array;
    printf("Enter size of an array: ");
    scanf("%d", &size);

    array = (int*)calloc(size, sizeof(int));

    for(int i = 0; i < size; i++){
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }

    printf("\n");

    free(array);

    return 0;
}