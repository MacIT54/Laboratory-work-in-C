#include <stdio.h>

#define n 10

int main() 
{
    int j, k, i, A[5], B[5];
    for (j = 0; n != 0; j++) {
        for (k = 0, i = 1; i < n; i++) {
            if (A[i] < A[k]) k = i; }
        B[j] = A[k];
        for (k < n - 1; k++) {A[k] = A[k + 1]}
        n--;
    }
}