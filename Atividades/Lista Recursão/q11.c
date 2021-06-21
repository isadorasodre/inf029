#include <stdio.h>
#include <stdlib.h>

int Multip_Rec(int n1, int n2);

int main ()
{
    int n1 = 120;
    int n2 = 5;
    int resultado = Multip_Rec(n1, n2);
    printf ("A soma sucessiva do número, simulando uma multiplicação, é igual a %d", resultado);
}

int Multip_Rec(int n1, int n2)
{
    if (n1 == 0 || n2 == 0)
        return 0;
    if (n2 == 1)
        return n1;
    return n1 +  Multip_Rec(n1, n2 -1); 
}
