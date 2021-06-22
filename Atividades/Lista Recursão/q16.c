#include <stdio.h>
#include <stdlib.h>

int fatduplo (int a);

int main ()
{
    int a = 0;
    int resultado = fatduplo (a);
    printf ("O resultado do duplo fatorial de %d eh %d", a, resultado);
}

int fatduplo (int a)
{
    if (a == 1)
        return 1;
    if (a%2 ==0)
        return 0;
    return a * fatduplo (a - 2);
}