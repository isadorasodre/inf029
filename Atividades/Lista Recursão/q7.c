#include <stdio.h>
#include <stdlib.h>

void inverteordem (float vetor [], int tamanho);

int main ()
{
    int tamanho = 100;
    float vetor [tamanho];
    int i =0; 
    for (i =0; i < tamanho; i++)
    {
        printf("Digite um número real\n");
        scanf ("%f", &vetor[i]);
    }
    printf("O valor invertido é igual a \n");
    inverteordem (vetor, tamanho);
}

void inverteordem (float vetor[], int tamanho)
{
    tamanho --;
    if (tamanho>= 0)
    {   
        printf ("%f\n", vetor[tamanho]);
        inverteordem (vetor, tamanho);
    }
}
