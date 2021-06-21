#include <stdio.h>
#include <stdlib.h>

int crescente (int a, int b);

int main ()
{   
    int a = 10;
    int b = 0;
    crescente (a, b);
}

int crescente (int a, int b)
{
    printf("%d\n", b);
    if (a > b)
    {
        return crescente (a -1, b+1);
    }
}