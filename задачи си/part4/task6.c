#include <stdio.h>

int main(){
    FILE *file;
    int array[100];
    int num, count = 0;

    file = fopen("array.txt", "r");

    if (file == NULL) {
        printf("Не удалось открыть файл!\n");
        return 0;
    }

    while (fscanf(file, "%d", &num) == 1) {
        if (count < 100) {
            array[count] = num;
            count++;
        }
    }

    fclose(file);

    for (int i = 0; i < count; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}