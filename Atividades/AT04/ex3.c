#include <stdio.h>
fatorial (int n)
{
int resultado
if (n == 1 || n == 0)
{
    resultado = 1;
}
if (n > 1)
{
    resultado = x * fatorial (x-1)
}
else
{
    printf("O número não pode ser calculado pois ele eh negativo\n");
}
return resultado;
}
int main ()
{
    int n, resultado;
    printf ("Digite um numero para descobrir o seu fatorial\n");
    scanf ("%d", n)
    resultado = fatorial (n);
    printf ("O fatorial do numero %d é %d\n", n, resultado);
    return 0;
}