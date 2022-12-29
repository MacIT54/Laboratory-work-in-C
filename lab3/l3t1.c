#include <stdio.h>

#define N 7
#define N1 1
#define N2 7
#define N4 5

int main() {

    for (int i = 0; i < N; i++) {
        printf("*");
    } 
    for (int j = 0; j <= N2; j++) {  
        printf("\n");
        printf("*"); 
        for (int i = 0; i < N4; i++) {
            printf(" ");    
            }       
            for (int j = 1; j <= N1; j++) {
                printf("*");
        }
    } 
    printf("\n");   
    for (int i = 0; i < N; i++) {
        printf("*");            
    } 
printf("\n");
return 0;
}

