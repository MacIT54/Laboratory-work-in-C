#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
#define N 5
#define swap(a, b) {int t = a; a = b; b = t;}

void reverse_array (int *F1, int size) 
{
    for (int i = 0, k = size - 1; i < k; i++, k--)
        swap(F1[i], F1[k]);
}

int  max_array (int *F1, int size) 
{
    int max_position = 0;
    for (int i = 1; i < size; i++)
        if (F1[i] > F1[max_position])
            max_position = i;
    return max_position;
}

void print_array (int *F1, int size) 
{
    for (int i = 0; i < size; i++)
        printf("%4d", F1[i]);
    puts("");
}

int prime(int n) 
{
    int d = 2;
    while (n % d != 0) {
            d = d + 1;
        }
    return d == n;
}

int reverse_numbers(int value)
{
    int result = 0;
    while (value) {
        result = result * 10 + value % 10;
        value /= 10;
    } 
    return result;
}

int main() 
{

    int F[5] = {102, 11, 20, 918, 30}, F1[5], i, k = 0, k1 = 0, j = 0, p, p2, size, max;
    printf("Array 1 - ");
    for (i = 0; i < 5; i++) { 
        printf("%d ",F[i]);
        p = prime(F[i]); 
        if (p == 1) {
            k += 1;
        }  
    }
    printf("\n");
    printf("Array 2 - ");
    for (i = 0; i < 5; i++) {
        F1[i] = reverse_numbers(F[i]);
        printf("%d ",F1[i]);
        p2 = prime(F1[i]);
        max = max_array(&F1[0], N); 
        if (p2 == 1) {
            k1 += 1;
        }         
    }
    printf("\n");
    printf("Count of prime numbers from array 1 - ");
    printf("%d ", k);
    printf("\n");
    printf("Count of prime numbers from array 2 - ");
    printf("%d ", k1);
    printf("\n"); 
    printf("Array 2 after removing maximum element - ");
    reverse_array(F1 + max, N - max);       
    reverse_array(F1 + max, N - max - 1);   
    print_array(F1, N - 1);  

}  

