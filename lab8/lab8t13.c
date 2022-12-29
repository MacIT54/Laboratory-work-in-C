#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{ 
    char x[100] = "The C language has conditiconccalcoc opecccccratcocrs and loops.";

    char a1[100] = "", a2[100] = "";
    
    int k = 0, max = -10000, i, j;

    for (i = 0, j = 0; i < strlen(x); i++)
    {
        if (x[i] != ' ')
        {
            a1[j++] = x[i];
            if (x[i] == 'c')
                k++;
        }
        else if (x[i] == ' ')
        {
            a1[j] = ' ';
            if (max < k)
            {
                max = k;
                strcpy(a2, a1);
            } 
            k = 0;
            j = 0;
        }
    }
printf("The word with the maximum count of letters: %s\n\n", a2);
printf("The maximum count of letters 'C' or 'c': %d\n\n", max);
}