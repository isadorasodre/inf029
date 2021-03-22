#include <stdio.h>
int soma (int n1, int n2);
int main ()
{
    int valor1, valor2, resultado;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite um segundo valor: \n");
    scanf("%d", &valor2);
    printf("O resultado das somas dos valores %d e %d é %d\n", valor1, valor2, soma (valor1, valor2));
}
int soma (int n1, int n2)
{
    return n1 + n2;
}