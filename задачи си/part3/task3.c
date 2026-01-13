#include "stdio.h"

int main(){
    int num = 7;
    switch(num){
        case 3:
            printf("value is 3\n");
            break;
        case 7:
            printf("value is 7\n");
            break;
        case 10:
            printf("value is 10\n");
            break;
        default:
            printf("value is %d\n", num);
            break;
    }
    return 0;
}