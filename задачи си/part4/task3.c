#include <stdio.h>

int main(){
    int n;
    printf("input side of a shape: ");
    scanf("%d", &n);
    int padding = n * 2;
    int space = -1;
    
    while(padding > 0){
        padding -= 2;
        for(int i = 0; i < padding; i++){
            printf(" ");
        }
        printf("*");
        if(space > 0){
            for(int i = 0; i < space; i++){
                printf(" ");
            }
            printf("*");
        }   
        printf("\n");
        space += 4;
    }

    space -= 4;

    while(padding < n * 2 - 2){
        padding += 2;
        space -= 4;
        for(int i = 0; i < padding; i++){
            printf(" ");
        }
        printf("*");
        if(space > 0){
            for(int i = 0; i < space; i++){
                printf(" ");
            }
            printf("*");
        }   
        printf("\n");
        
    }
    
    return 0;
}