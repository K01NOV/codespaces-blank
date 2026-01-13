#include <stdio.h>

int main(){
    int n = 4;
    int h = 4;
    printf("input 2 sides of a shape: ");
    scanf("%d %d", &n, &h);
    int space = 0;
    
    for(int i = 0; i < n - 1; i++){
        printf("*  ");
        space += 3;
    }
    printf("*\n");
    while(h - 2 > 0){
        printf("*");
        for(int i = 0; i <= space - 2; i++){
            printf(" ");
        }
        printf("*\n");
        h--;
    }

    for(int i = 0; i < n; i++){
        printf("*  ");        
    }
    printf("\n");
    return 0;
}