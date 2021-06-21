#include <stdio.h>
#include <stdlib.h>

int descrescente (int a, int b);

int main ()
{   
    int a = 0;
    int b = 35;
    descrescente (a, b);
}

int descrescente (int a, int b)
{
    printf("%d\n", b);
    if (a < b)
    {
        return descrescente (a, b-1);
    }
}