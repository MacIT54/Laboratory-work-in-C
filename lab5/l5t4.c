#include <stdio.h>

#define n 10

int main() 
{ 
    int s, i, A[5];
    for (s = 0, i = 0; i < n; i++) {
        if (A[i] < 0) {continue;}
        if (A[i] == 0) {break;}
        s = s + A[i];
        printf("%d", s);
    }
}