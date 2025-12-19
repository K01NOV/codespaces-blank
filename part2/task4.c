#include <stdio.h>

int main(){
    int num1 = 25;
    int num2 = 10;
    int dif = num1 - num2;
    float div = (float)num1 / num2;
    printf("%d - %d = %d\n", num1, num2, dif);
    printf("%d / %d = %.1f\n", num1, num2, div);
    return 0;
}