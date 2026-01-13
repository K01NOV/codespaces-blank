#include "stdio.h"

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if(num < 10 || num > 20){
        printf("outside\n");
    }
    else{
        printf("inside\n");
    }
    return 0;
}