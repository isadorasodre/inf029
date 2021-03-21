#include <stdio.h>
int soma (int numero1, int numero2)
{
    int resultado;
    resultado = numero1 + numero2;
    return (resultado);
}
int main ()
{
    int n1, n2, resultado;
    printf ("Digite o primeiro valor:\n");
    scanf("%d", &n1);
    printf ("Digite um segundo valor: \n");
    scanf("%d", &n2);
    resultado = soma (n1, n2);
    printf ("O resultado da soma é %d\n", resultado);
    return 0;
}