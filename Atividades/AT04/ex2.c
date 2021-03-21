#include <stdio.h>
int subtrai (int n1, int n2, int n3)
{
    int resultado;
    resultado = (n1 - n2 - n3);
    return resultado; 
}
int main ()
{
    int valor1, valor2, valor3, resultado;
    printf ("Digite o primeiro número: \n");
    scanf("%d", &valor1);
    printf ("Digite o segundo valor\n");
    scanf ("%d", &valor2);
    printf ("Digite o terceiro valor\n");
    scanf ("%d", &valor3);
    resultado = subtrai (valor1, valor2, valor3);
    printf ("O resultado da subtração dos três números é %d\n", resultado);
    return 0;
}