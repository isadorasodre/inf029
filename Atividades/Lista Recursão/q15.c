#include <stdio.h>
#include <stdlib.h>

int pardesc (int a, int b);

int main ()
{   
    int a = 0;
    int b = 35;
    pardesc (a, b);
}

int pardesc (int a, int b)
{
    printf("%d\n", b);
    if (a < b)
    {
        return pardesc (a, b-1);
    }
}