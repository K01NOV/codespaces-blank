#include <stdio.h>

int main(){
    int n;
    printf("input amount of greetings: ");
    scanf("%d", &n);
    if(n < 0){
        printf("invalid number\n");
        return 0;
    }
    for(int i = 1; i <= n; i++){
        printf("hello world\n");
    }
    return 0;
}