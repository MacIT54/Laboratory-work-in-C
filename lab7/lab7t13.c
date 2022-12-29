#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void average(int **A, size_t N, size_t M) 
{
    printf("Vector D: \n");
    int sum = 0, aver, mas[N];
    for (int i = 0; i < N; i++)
    {
        int s = 0;
        for (int j = 0; j < M; j++) 
        {
            s += A[i][j]; 
            mas[i] = s;
        }
        printf("%d\n", mas[i]);
    }  
    printf("\n");   
}

void count_minus(int **B, size_t N, size_t P)
{
    printf("\n");
    printf("Vector G: \n");
    for (int i = 0; i < N; i++) 
    {   
        int k = 0, mas[N];
        for (int j = 0; j < P; j++)
        {
            if (B[j][i] < 0) 
            {
                k += 1;
                mas[i] = k;
            }
        }
        printf("%d\n", k);
    }
    printf("\n");
}

void array_print(int **A, size_t N, size_t M)
{
    printf("\n");
    printf("Matrix C(k, m) before processing:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) 
        {
            printf("%5d ", A[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
}  

void array_print_b(int **B, size_t N, size_t P)
{
    printf("Matrix C(k, p) before processing:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++) 
        {
            printf("%5d ", B[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
} 
// size_t 
// return
int ** array_malloc(size_t N, size_t M)
{
    int **A;
    A = (int **)malloc(N * sizeof(int*));
    for (int i = 0; i < N; ++i) 
    {
        A[i] = (int *)malloc(M * sizeof(int));
    }
    return A;
}

int ** array_malloc_b(size_t N, size_t P)
{
    int **B;
    B = (int **)malloc(N * sizeof(int*));
    for (int i = 0; i < N; ++i) 
    {
        B[i] = (int *)malloc(P * sizeof(int));
    }
    return B;
}

void array_test(size_t N, size_t M)
{
    srand(time(0));
    int **A = array_malloc(N, M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = -10 + rand() % 20;
        }
    }
    printf("---------------------------------------");
    array_print(A, N, M);
    printf("---------------------------------------");
    printf("\n");
    average(A, N, M);
    printf("---------------------------------------");
    printf("\n");
}

void array_test_b(size_t N, size_t P)
{
    srand(time(0));
    int **B = array_malloc_b(N, P);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            B[i][j] = -10 + rand() % 20;
        }
    }
    array_print_b(B, N, P);
    printf("---------------------------------------");
    count_minus(B, N, P); 
    printf("---------------------------------------");
    printf("\n");
}

int main()
{
    int matrix_height = 4;
    int matrix_width = 5;
    int matrix_width_for_b = 4;

    array_test(matrix_height, matrix_width);
    array_test_b(matrix_height, matrix_width_for_b);
    
    return 0;
}
