#include <stdio.h>
#include <stdlib.h>

int pares (int a, int b);

int main ()
{
    int a = 42;
    int b = 0;
    pares (a, b);
}

int pares (int a, int b)
{   
    printf("%d\n", b);
    if (a > b)
    {
        return pares (a, b+2);
    }
    else 
        return 0; 
}