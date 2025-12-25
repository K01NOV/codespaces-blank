#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    printf("input length of array: ");
    int n, num;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        num = rand() % 100;
        arr[i] = num;
    }
    
    for(int i = 0; i < n; i++){
       printf("%d ", arr[i]);
    }
    return 0;
}