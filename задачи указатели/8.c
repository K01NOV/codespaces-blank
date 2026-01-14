#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num_arrays = 3;
    int array_size = 5; 

    int **mainArr = (int**)calloc(num_arrays, sizeof(int*));

    for (int i = 0; i < num_arrays; i++) {
        mainArr[i] = (int*)calloc(array_size, sizeof(int));

        for (int j = 0; j < array_size; j++) {
            mainArr[i][j] = rand() % 100;
        }
    }

    printf("Dynamic arrays:\n");
    for (int i = 0; i < num_arrays; i++) {
        for (int j = 0; j < array_size; j++) {
            printf("%3d", mainArr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < num_arrays; i++) {
        free(mainArr[i]);
    }
    free(mainArr);

    return 0;
}
