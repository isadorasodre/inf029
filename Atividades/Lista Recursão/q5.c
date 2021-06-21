#include <stdio.h>
#include <stdlib.h>

int soma(int n1);

int main ()
{
    int n1 = 10;
    int resultado = soma (n1);
    printf("A soma deste numero escolhido até um eh %d", resultado);
}

int soma (int n1)
{
    if (n1==1)
        return 1;
    return n1 + soma (n1 - 1); 
}