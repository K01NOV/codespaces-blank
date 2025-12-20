#include <stdio.h>
#include <stdbool.h>

bool even(int num){
    if(num % 2 == 0){
        return true;
    }
    return false;
}

int main(){
    printf("enter a number: ");
    int num;
    scanf("%d", &num);
    printf("the number is %s\n", even(num) ? "even" : "odd");
    return 0;
}