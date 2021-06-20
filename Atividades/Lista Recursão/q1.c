#include <stdio.h>
#include <stdlib.h>

int fatorial (int n);

int main ()
{
    int n = 5;
    int resultado = fatorial (n);
    printf("O fatorial de %d eh %d", n, resultado);
}

int fatorial (int n)
{
    int resultado;
    if (n ==0)
    {
        resultado = 1; 
    }
    else 
    {
        resultado = n * fatorial (n - 1);
    }
    return resultado; 
}