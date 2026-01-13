#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size = 10;
    arr = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}