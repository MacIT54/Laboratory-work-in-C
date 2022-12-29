#include <stdio.h>  
#include <stdlib.h>  

typedef struct  
{  
char str[50];      
int num;  
} NumberRepr;  
  
void format(NumberRepr* number)  
{      
sprintf(number->str, "%3d", number->num);  
}   

int main()  
{  
NumberRepr number = { .num = 1025 };  
format(&number);  
printf("str: %s\n", number.str);      
printf("num: %d\n", number.num);  
return 0;  
}  

