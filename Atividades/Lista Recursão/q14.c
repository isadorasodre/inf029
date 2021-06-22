#include <stdio.h>
#include <stdlib.h>

int parescres (int a, int b);

int main ()
{
    int a = 23;
    int b = 0;
    parescres (a, b);
}

int parescres (int a, int b)
{   
    if (b%2 == 0)
        printf("%d\n", b);
    if (a > b)
        return parescres (a, b+1);
}