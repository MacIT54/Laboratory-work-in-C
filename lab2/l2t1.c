#include <stdio.h>

#define n 1

int main() {
    
    int s, i;
    for (s = 1, i = 0; i <= n; i++) {
        s = s * 2;
        printf("s = %d\n", s);
    }

return 0;

}