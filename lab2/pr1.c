#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    float y;
    printf("a = ");
    scanf("%d", &a);
    if (a <= -2) {
        y = (- (5.0 / 3.0)) * a - (10.0 / 3.0); 
    } else if (a <= 2) {
        y = sqrt(4 - a * a);
    } else {
        y = (5.0 / 3.0) * a - (10.0 / 3.0);
    }
    printf("y = ");
    printf("%f\n", y);

return 0;

}