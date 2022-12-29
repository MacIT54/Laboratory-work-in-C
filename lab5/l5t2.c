#include <stdio.h>

#define n 5

int main() 
{
    int v = 10, A[0], i, s;
    v = A[0] + 1;

    do {
        v--;
        for (i = 0, s = 0; i < n; i++) {
            if (A[i] % v != 0) {
                printf("%d", A[i]);
                s = 1; break;
            }
        }
    } while (s == 1);

printf("%d", A[i]);
}