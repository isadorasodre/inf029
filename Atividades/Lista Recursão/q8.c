#include <stdio.h>
#include <stdlib.h>

int mmc (int a, int b, int c);

int main ()
{
    int a = 10;
    int b = 20;
    int c = a;
    int maxdiv = mmc(a, b, c);
    printf("O maximo divisor comum de %d e %d eh %d", a, b, maxdiv);
}

int mmc (int a, int b, int c)
{
    c --;
    if (a%c == 0 && b%c==0)
        return c;
    return mmc (a, b, c);
}