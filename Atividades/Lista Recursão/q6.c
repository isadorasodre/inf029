#include <stdio.h>
#include <stdlib.h>

int potencia (int k, int n);

int main ()
{   
    int k, n;
    printf("Digite um numero inteiro qualquer: \n");
    scanf ("%d", &k);
    printf("Digite um número no qual sera elevada a potencia: \n");
    scanf ("%d", &n);
    int resultado = potencia (k, n);
    printf("Este numero elevado a esta potencia possui o resultado de %d", resultado);
}

int potencia (int k, int n)
{
    if (n ==0)
        return 1;
    if (n ==1)
        return k;
    return k * potencia (k, n-1);
}