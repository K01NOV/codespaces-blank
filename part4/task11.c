#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char buffer[1024];

    printf("Введите строки (пустая строка для выхода):\n");

    while (fgets(buffer, sizeof(buffer), stdin)) {
        if (buffer[0] == '\n' || buffer[0] == '\r') {
            break;
        }

        for (int i = 0; buffer[i] != '\0'; i++) {
            buffer[i] = toupper((unsigned char)buffer[i]);
        }

        printf("%s", buffer);
    }

    return 0;
}
