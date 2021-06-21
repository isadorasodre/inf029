#include <stdio.h>
#include <stdlib.h>

int igual (int vetor []);

int main ()
{
    int vetor[3];
    vetor [2] = 0;
    printf("Digite um numero qualquer: \n");
    scanf("%d", &vetor[0]);
    printf("Digite o numero que deseja buscar \n");
    scanf("%d", &vetor [1]);
    igual (vetor);
    printf("O número buscado %d aparece %d no numero digitado\n", vetor[1], vetor[2]);

}

int igual (int vetor [])
{
    if (vetor[0] == 0)
        return 0;
    else
    {
        if(vetor[1] == (vetor[0]%10))
            vetor[2] ++;
        vetor[0] = vetor[0]/10;
        return igual (vetor);
    }
    return 0;
}