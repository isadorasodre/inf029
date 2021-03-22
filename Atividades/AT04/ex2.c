#include <stdio.h>
int subtrai (int n1, int n2, int n3);
int main ()
{
    int valor1, valor2, valor3;
    printf ("Digite um número: \n");
    scanf ("%d", &valor1);
    printf ("Digite um segundo número: \n");
    scanf ("%d", &valor2);
    printf ("Digite um  terceiro número número: \n");
    scanf ("%d", &valor1);
    printf ("A subtração destes três números é %d", subtrai (valor1, valor2, valor3));
    return 0;
}
int subtrai (int n1, int n2, int n3)
{
    return n1 - n2 - n2;
}