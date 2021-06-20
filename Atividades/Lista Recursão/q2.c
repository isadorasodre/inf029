#include <stdio.h>
#include <stdlib.h>

int fibo (int x, int y, int z);

int main ()
{
    int x = 8;
    int result = fibo (x, 0, 1);
    printf("O termo %d na sequencia fibonacci eh %d \n", x, result);
}

int fibo (int x, int y, int z)
{
    int resultado;
    if (x == 0)
        resultado = y;
    if (x == 1) 
        resultado = z;
    else
    resultado = fibo(x-1, y, y+z);
    return resultado; 
}
