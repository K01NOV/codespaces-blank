#include <stdio.h>
#include <stdlib.h>

int main() {
    int size1 = 5;
    int size2 = 10;

    int *array = (int*)calloc(size1, sizeof(int));

    printf("An array of 5: ");
    for (int i = 0; i < size1; i++) {
        array[i] = i + 1; 
        printf("%d ", array[i]);
    }
    printf("\n");

    int *temp = (int*)realloc(array, size2 * sizeof(int));
    
    array = temp;

    for (int i = size1; i < size2; i++) {
        array[i] = i + 1;
    }

    printf("An array of 10: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
