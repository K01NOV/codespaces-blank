#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2;
    char sign;
    double result;
    while(1){
        printf("for exit input '0 X 0'\n");
        printf("input an equation (x + y): ");
        scanf("%d %c %d", &num1, &sign, &num2);
        switch(sign){
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = (double)num1 / (double)num2;
                break;
            case '^':
                result = pow(num1, num2);
                break;
            case 'X':
                return 0;
            default:
                printf("invalid equation");
                break;
        }
        printf("= %.1f\n", result);
    }
    
    return 0;
}