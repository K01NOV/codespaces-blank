#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 5;
    float* array;
    array = (float*)calloc(size, sizeof(float));
    for(int i = 0; i < size; i++){
        array[i] = 0;
        printf("%.f ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}