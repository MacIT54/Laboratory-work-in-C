#include <stdio.h>
#include <stdlib.h>

int prime(int n) { 
    if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}

int reverse_num(int *arr2, size_t n) {
    int tmp;
    for (int i = 0; i < n / 2; i++) {
        tmp = arr2[i];
        arr2[i] = arr2[n - i - 1];
        arr2[n - i - 1] = tmp;
    }
    return 0;
}

int reverse_numbers(int value) {
    int result = 0;
    while (value) {
        result = result * 10 + value % 10;
        value /= 10;
    } 
    return result;
}

int arr_print(int *arr, size_t n) {
    for (int i = 0; i < n; i++) {
        printf("%3d ", arr[i]);   
    }
    printf("\n");
    return 0;
}

int main() {
    int n, mx = -10000, mn = 10000, mx1 = -10000, mn1 = 10000;
    scanf("%d", &n);
    int *arr1 = malloc(n * sizeof(int));  
    int *arr2 = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("arr1 before processing:\n");
    arr_print(arr1, n);  
    int k = 0, j = 0;
    int *arr12 = malloc(k * sizeof(int));
    for (int i = 0; i < n; i++) {
        int p1 = prime(arr1[i]);
        if (p1 == 0) {
            arr12[j]=arr1[i];
            k++;
            j++;
        } 
    }
    printf("Prime numbers: 2, 3, 5, 7, 11, 13...\n");
    printf("arr1 after processing:\n");
    arr_print(arr12, k);
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    for (int i = 0; i < n; i++) {
        arr2[i] = reverse_numbers(arr2[i]);
    }
    printf("Ready arr2:\n");
    arr_print(arr2, n);
    for (int i = 0; i < n; ++i) {
        if (arr1[i] > mx)
        {
            mx = arr1[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (arr1[i] < mn)
        {
            mn = arr1[i];
        }
    }
    printf("arr1: max - %d, min - %d\n", mx, mn);
    for (int i = 0; i < n; ++i) {
        if (arr2[i] > mx1)
        {
            mx1 = arr2[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (arr2[i] < mn1)
        {
            mn1 = arr2[i];
        }
    }
    printf("arr2: max - %d, min - %d\n", mx1, mn1);
return 0;
}
