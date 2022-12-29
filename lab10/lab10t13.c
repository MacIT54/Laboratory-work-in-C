#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define pi 3.14159265

double fac(double n)
{
    if (n <= 1) {
        return 1;
    } 
    return n * fac(n - 1);
}

double function(double x, double b, int n)
{   
    double ns = ((powf(x, n) * sin(b + n * 3.14/2)) / fac(n));
    if (fabs(ns) >= 0.0001)
    {
        
        printf("%d. %lf\n",n ,ns);
        return ns + function(x, b, n + 1);
    }
    else
    {
        printf("\nCount of numbers = %d \n",n - 1);
        return ns;
    }
}

int main()
{
    double x = 0.1, b = -0.2, range;
    double sinus = sin(x + b);
   // double sinus1 = sin(b) + x * cos(b) + ((pow(x, 2) * sin(b)) / (2));
    printf("sin(x + b) with standard function: %lf \n", sinus);
    range = function(x, b, 0);
    printf("Sum: %lf \n", range);
    //printf("Sinus(x + b) with according to the formula: %lf\n", sinus1);
}