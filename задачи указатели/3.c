#include <stdio.h>
#include <stdlib.h>

int main(){
    char *string;
    int size = 50;
    string = (char *)malloc((size + 1) * sizeof(char));
    printf("Enter a string: ");
    fgets(string, size, stdin);
    printf("You typed: %s", string);
    free(string);
    return 0;
}