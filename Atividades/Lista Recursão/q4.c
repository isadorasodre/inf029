#include <stdio.h>
#include <stdlib.h>

int somavetor (int vetor [], int tamanho);

int main ()
{
    int vetor [4] = {10, 20, 3, 1};
    int tamanho = 4;
    int soma = somavetor (vetor, tamanho);
    printf ("A soma dos vetores eh %d", soma);
}

int somavetor (int vetor [], int tamanho)
{
    if (tamanho == 1)
        return vetor [0];
    return vetor [tamanho-1] + somavetor (vetor, tamanho - 1);
}   