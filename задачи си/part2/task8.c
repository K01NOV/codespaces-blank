#include <stdio.h>

int main(){
    int num1 = 100;
    int num2 = 50;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2f\n", num1, num2, (double)num1 / num2);

    return 0;
}