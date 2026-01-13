#include <stdio.h>

int main(){
    int num1, num2;
    printf("input 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    float div = (float)num1 / (float)num2;
    printf("%d / %d = %.2f\n", num1, num2, div);
    return 0;
}