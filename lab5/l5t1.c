#include <stdio.h>

#define n 10

int main() 
{
    int i, j, m, A[3] = {1, 2, 3}, B[3];
    for (j = 0, i = 0; i < n; i++) {
        for (m = 2; m < A[i]; m++) {
            if (A[i] % m == 0) {
                break;} 
        }
        if (m == A[i]) {
            B[j++] = A[j];}
            printf("%d", A[i]);
    }
B[j] = 0;
printf("%d", A[i]);
return 0;
}
