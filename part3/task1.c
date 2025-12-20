#include <stdio.h>
#include <string.h>

int main(){
    char str1[50], str2[50];
    printf("enter first string: ");
    scanf("%s", str1);
    printf("enter second string: ");
    scanf("%s", str2);
    if(strcmp(str1, str2) == 0){
        printf("strings match\n");
    }
    else{
        printf("strings differ\n");
    }
    return 0;
}