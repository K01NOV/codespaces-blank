#include <stdio.h>

int main(){
    int num1 = 100;
    int num2 = 50;
    int x = 30;
    int y = 5;
    int sum = num1 + num2;
    int mul = x * y;
    if(mul == sum){
        printf("%d\n", sum);
    }
    else{
        printf("%d != %d\n", sum, mul);
    }
    return 0;
}