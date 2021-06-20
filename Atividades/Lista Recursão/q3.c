#include <stdio.h>
#include <stdlib.h>

void inverte (int x); 

int main ()
{ 
    int x; 
    printf ("Digite um numero inteiro qualquer: \n ");
    scanf ("%d", &x);
    inverte (x);
}

void inverte (int x)
{
    int digito = 0; 
    if (x > 0)
    {
        digito = ((digito * 10) + (x % 10));
        x /= 10;
        printf("%d", digito);
        inverte (x);
    }
}