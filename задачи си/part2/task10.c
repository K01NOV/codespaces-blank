#include <stdio.h>
#include <math.h>

int main(){
    float num1 = 20;
    float num2 = 4;
    float num4 = sqrtf(powf(num1, 2) + powf(num2, 2));
    printf("%.2f\n", num4);
    return 0;
}