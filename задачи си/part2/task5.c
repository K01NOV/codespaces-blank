#include <stdio.h>
#include <math.h>

int main(){
    float num1 = 12.5;
    float num2 = 2.3;
    float rest = fmodf(num1, num2);
    printf("%.1f %c %.1f = %.2f\n", num1, '%', num2, rest);
    return 0;
}