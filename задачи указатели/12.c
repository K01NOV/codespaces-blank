#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy_string(char* source) {
    if (source == NULL) return NULL;

    int length = strlen(source);
    char* target = (char*)malloc((length + 1) * sizeof(char));
    if (target == NULL) {
        return NULL; 
    }

    strcpy(target, source);
    return target;
}

int main() {
    char original[] = "hello world";
    
    char* duplicate = copy_string(original);

    printf("Original: %s\n", original);
    printf("Copy: %s\n", duplicate);

    free(duplicate);

    return 0;
}
