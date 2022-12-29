#include <stdio.h>
#include <stdlib.h>
  
int* init(int* arr, int n){  
    arr = malloc(n * sizeof(int));      
    int i;  
    for (i = 0; i < n; i++){  
        arr[i] = i;  
    }
    return arr;
}   
int main(){      
    int* arr;      
    int n = 10;      
    arr = init(arr, n);  
    int i;  
    for (i = 0; i < n; i++) {  
        printf("%d\n", arr[i]);  
    }    
    return 0; 
} 



// #include <stdio.h>  
// #include <stdlib.h>  

// int init(int* arr, int n)  
// { 
// *arr = *(int*)malloc(n * sizeof(int));      
// int i;  
// for (i = 0; i < n; ++i) {  
//         arr[i] = i;  
//     }  
//     return *arr;
// } 

// int main()  
// {      
// int* arr;      
// int n = 10;      
// init(arr, n);  
// int i;  
// for (i = 0; i < n; i++) {  
// printf("%d\n", arr[i]);  
// }      
// return 0; 
// }  



// #include <stdio.h>  
// #include <stdlib.h>  
  
// int * init(size_t n)  
// {  
//     int *arr;
//     arr = (int **)malloc(n * sizeof(int*));       
//     for (int i = 0; i < n; ++i) 
//     {  
//         arr[i] = (int *)malloc(n * sizeof(int)); 
//     } 
//     return arr; 
// } 

// int main()  
// {  
// int n = 10;     
// int **arr = init(n);      
// for (int i = 0; i < n; i++) {  
//     printf("%d\n", arr[i]);  
// }      
// return 0; 
// }  