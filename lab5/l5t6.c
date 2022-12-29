#include <stdio.h>

#define n 10

int main() 
{
    int i, k, A[5];
    for (i = 0, k = -1; i < 10; i++) {
        if (A[i] < 0) {continue;}
        if (k == -1) {k = i;}
        else if (A[i] < A[k]) {k = i;}
    }
}