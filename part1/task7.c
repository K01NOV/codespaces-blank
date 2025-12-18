#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int num = rand() % 100;
    float fl = ((float)rand() / (float)RAND_MAX) + rand() % 100;
    double db = (double)rand() / (double)RAND_MAX + rand() % 100;
    char ch = 'a' + rand() % 26;

    printf("%d, %.3f, %.2f, %c\n", num, fl, db, ch);
    return 0;
}