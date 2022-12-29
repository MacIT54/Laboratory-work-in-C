#include <stdio.h>

int main() {
    unsigned int a = 5;
    unsigned int a1 = (a >> 24) & 0xFF;
    unsigned int a2 = (a & 0xFF) << 24;
    unsigned int a3 = a & 0xFFFF00;
    a = a1 + a2 + a3;
    printf("%d\n", a);



return 0;
}