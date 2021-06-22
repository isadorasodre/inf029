#include <stdio.h>
#include <stdlib.h>

int pares (int a, int b);

int main ()
{
    int a = 24;
    int b = 0;
    pares (a, b);
}

int pares (int a, int b)
{   
    if (b%2 == 0)
        printf("%d\n", b);
    if (a > b)
        return pares (a, b+1);
}