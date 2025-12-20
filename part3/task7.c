#include <stdio.h>

int main(){
    printf("enter a grade (0-100): ");
    int num;
    scanf("%d", &num);
    if(num > 89){
        printf("exellent\n");
    }
    else if(num > 74){
        printf("good\n");
    }
    else if(num > 49){
        printf("satisfactory\n");
    }
    else{
        printf("unsatisfactory\n");
    }
    return 0;
}