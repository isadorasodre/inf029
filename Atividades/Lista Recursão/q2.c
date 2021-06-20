#include <stdio.h> 
#include <stdlib.h>

int fibonacci (int n, int x, int y);

int main (){
  int n = 8;
  int fib = fibonacci(n, 0, 1);
  printf ("O termo %d da sequencia Fibonacci eh %d", n, fib);
}

int fibonacci (int n, int x, int y) {
    if (n == 0)
         return x;
    if (n == 1) 
        return y;
    return fibonacci(n-1, y, x+y);
}