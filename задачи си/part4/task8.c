#include <stdio.h>

int main(){
    float arr1[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    int arr2[3][3] = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 18, 9}
    };

    float sum = 0;
    int max = arr2[0][0], min = arr2[0][0];

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr2[0]) / sizeof(arr2[0][0]);

    for(int i = 0; i < size1; i++){
        sum += arr1[i];
    }

    for(int i = 0; i < size2; i++){
        for(int j = 0; j < size3; j++){
            if(arr2[i][j] > max){
                max = arr2[i][j];
            }
            if(arr2[i][j] < min){
                min = arr2[i][j];
            }
        }
    }

    printf("Sum of array 1: %.1f\n", sum);
    printf("Max of array 2: %d\n", max);
    printf("Min of array 2: %d\n", min);

    return 0;
}