#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int M, N; //M rows, N cols
    printf("Enter size of the matrix (MxN): ");
    scanf("%dx%d", &M, &N);
    int **matrix = (int**)calloc(M, sizeof(int*));

    for(int i = 0; i < M; i++){
        matrix[i] = (int*)calloc(N, sizeof(int));
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            matrix[i][j] = (rand() % 100) + 1;
        }
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%3d", matrix[i][j]); 
        }
        printf("\n");
    }
    for(int i = 0; i < M; i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}