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
    if (x == 0)
        return y;
    if (x == 1) 
        return z;
    else
    return fibo(x-1, y, y+z);
}
