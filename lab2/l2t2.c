#include <stdio.h>



int main() {
    int j, i, n = 5, a1, a2,b;
    a1 = 1;
    a2 = 1;
    printf("%d \n", a1);
    for (i = 1; i <= n; i++) {
        printf("%d ", a1);
        for (j = 1; j <= i; j++) {
            printf("%d ", a1 + a2);
            b = a1;
            a1 = a2;
            a2 = b + a1;
        }
    printf("\n");
    b = 0;
    a1 = 1;
    a2 = 1;
    }
   
return 0;

}
