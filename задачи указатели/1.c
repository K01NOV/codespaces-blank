#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num;
    num = (int *)malloc(sizeof(int));
    *num = 5;
    printf("%d\n", *num);
    free(num);
    return 0;
}