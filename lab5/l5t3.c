#include <stdio.h>

#define n 5

int main() 
{
    int s, i, A[5], k, b;
    for (s = 0, i = 0; i < n - 1; i++) {
        if (A[i] == A[i + 1]) {
            for (k = 2; i + k < n && A[i] == A[i + k]; k++) {
                if (k > s) s = k, b = i;
            }
        }
    }
}