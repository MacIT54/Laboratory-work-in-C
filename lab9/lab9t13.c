#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_print(int **A, size_t N)
{
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%5d ", A[i][j]);
        }
        printf("\n");   
    }
} 

int diag(int **A, size_t N)
{
    int k = 0;
    printf("Side diagonal: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i][N - i - 1]);
        if (A[i][N - i - 1] == 0)
        {
            k++;
        }
    }
    printf("\n");
    printf("Count of zero elements: %d \n", k);
    return k;   
}

int maximum(int **A, size_t N)
{
    int max = -100, k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) 
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }
        
    } 
    printf("max: %d\n", max); 
    return max;
}

void square(int **A, size_t N, size_t max, size_t k)
{
    printf("Matrix with zeros:\n");
    int mj, mi;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] == max)
            {
                mi = i;
                mj = j;              
            }
        }
    }
    int k1 = 0;
    for (int i = mi, j = mj; i >= 0 && j < N; i--, j++)
    {
        k1++;
    }
    int k2 = k1;
        for (int i = mi, ki = 0; i >= 0; i--, ki++)
        {
            for (int j = mj, kj = 0; j < N; j++, kj++)   
            {   
                if (ki < k2 && kj < k2)
                {
                    A[i][j] *= k;
                }                 
            }      
        }     
    array_print(A, N);  
}

void modules(int **A, size_t N)
{
    int m = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) 
        {
            if (A[i][j] < 0)
            {
                A[i][j] *= m;
            }
        }  
    }
    printf("Matrix after processing:\n");
    array_print(A, N);
}

int ** array_malloc(size_t N)
{
    int **A;
    A = (int **)malloc(N * sizeof(int*));
    for (int i = 0; i < N; ++i) 
    {
        A[i] = (int *)malloc(N * sizeof(int));
    }
    return A;
}

void array_free(int **A, size_t N)
{
    for (int i = 0; i < N; i++)
    {
        free(A[i]);
    }
    free(A);
}

int main()
{
    printf("If you want to populate the array manually enter 1, if randomly enter 2.\n");
    int a ;
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Enter size of matrix:\n");
        printf("N = ");
        int N;
        scanf("%d", &N);
        printf("\n");
        int **A = array_malloc(N);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("A[%d][%d]=", i, j);
                scanf("%d", &A[i][j]);
            }
        }
        printf("Matrix before processing:\n");
        array_print(A, N);
        int max = maximum(A, N);
        int k = diag(A, N);
        printf("\n");
        square(A, N, max, k);
        modules(A, N);
    } 
    else if (a == 2)
    {
        printf("Enter size of matrix:\n");
        printf("N = ");
        int N;
        scanf("%d", &N);
        srand(time(0));
        printf("\n");
        int **A = array_malloc(N);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                A[i][j] = -100 + rand() % 200;
            }
        }
        printf("Matrix before processing:\n");
        array_print(A, N);
        int max = maximum(A, N);
        int k = diag(A, N);
        printf("\n");
        square(A, N, max, k);
        modules(A, N);
    } 
    else
    {
        printf("The value is not defined\n");
    }
    return 0;
}