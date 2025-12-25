#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    
    printf("Введите длину строки:\n");
    int length;
    scanf("%d", &length);
    
    getchar();
    
    printf("Введите строку:\n");
    fgets(str, 1000, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    printf("Строка в обратном порядке:\n");
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}