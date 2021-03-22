#include <stdio.h>
int fatorial (int n);
int main ()
{
    int n1;
    int resultado;
    printf ("Digite um núemro para descobrir o seu fatorial\n");
    scanf("%d", &n1);
    resultado = fatorial (n1);
    printf("O resultado é %d", resultado);
    return 0;
}
int fatorial (int n)
{
    int fat;
    int resultado;
    if (n == 0 || n == 1);
    {
        return 1;
    }
    if (n>1);
    {
        for(fat = 1; n > 1; n--);
        fat = fat*n;
    }
    if (n < 0);
    {
    printf ("Erro\n");
    return 0;
        }
        resultado = fat;
        return resultado;
}