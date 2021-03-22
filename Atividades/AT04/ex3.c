#include <stdio.h>
#include <conio.h>
int fatorial (int n)
int main ()
{
        int n;
        int resultado;
        printf ("Digite um numero para descobrir o seu fatorial\n");
        scanf ("%d", n);
        resultado = fatorial(n);
        printf ("O fatorial do numero %d é %d\n", n, resultado);
        getch();
        return 0;
}
int fatorial (int n)
{
    int resultado, n;
    if (n == 1 || n == 0)
    {
        resultado = 1;
        return resultado;
    }
    if (n > 1)
    {
        resultado = n * fatorial (n-1);
        return resultado;
    }
    else
    {
        printf("O número não pode ser calculado pois ele eh negativo\n");
        getch();
    }
}