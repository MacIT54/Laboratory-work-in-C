#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arr_print(int **A, size_t N, size_t M) {
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int ** arr_malloc(size_t N, size_t M)
{
    int **A;
    A = (int **)malloc(N * sizeof(int*));
    for (int i = 0; i < N; ++i) {
        A[i] = (int *)malloc(M * sizeof(int));
    }
    return A;
}

void array_free(int **A, size_t N) {
    for (int i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);
}

int main() {
    int N = 5, M = 5, mx = -10000, mn = 10000, sum_side_diag = 0, sum_secondary_diag = 0, ratio, sum_matrix = 0;
    srand(time(0));
    int **A = arr_malloc(N, M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = -10 + rand() % 20;
        }
    }
    arr_print(A, N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (abs(A[i][j]) > mx) {
                mx = abs(A[i][j]);
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (abs(A[i][j]) < mn) {
                mn = abs(A[i][j]);
            }
        }
    }
    printf("Maximum element: %d\n", mx);
    printf("Minimum element: %d\n", mn);
    if (mn != 0) {
        ratio = mx / mn;
        printf("Ratio of maximum and minimum numbers: %d\n", ratio);
    } else {
        printf("Minimum element is null, so it's not possible to check the ratio of numbers\n");
    }  
    for (int i = 0; i < N; i++) {
        if (i != N - i - 1) {
            sum_side_diag += A[i][N - i - 1];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum_matrix += A[i][j];
            if (i != j) {
                sum_secondary_diag += A[i][j];
            }
        }
    }
    int sum_without_diag = sum_secondary_diag - sum_side_diag;
    printf("Sum of elements outside the diagonals: %d\n", sum_without_diag);
    return 0; 
}
