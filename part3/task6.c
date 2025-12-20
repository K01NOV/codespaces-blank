#include <stdio.h>

int positive(int num){
    if(num > 0){
        return 1;
    }
    if(num < 0){
        return -1;
    }
    return 0;
}

int main(){
    printf("enter a number: ");
    int num;
    scanf("%d", &num);
    switch(positive(num)){
        case 1:
            printf("the number is positive\n");
            break;
        case -1:
            printf("the number is negative\n");
            break;
        case 0:
            printf("the number is zero\n");
            break;
    }

    return 0;
}