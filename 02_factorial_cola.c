#include <stdio.h>
#include <stdlib.h>

int factorial_rec (int n, int parcial)
{
    if (n == 0) return parcial;
    return factorial_rec(n-1, n * parcial);
}

int factorial (int n)
{
    return factorial_rec(n, 1);
}

int main(int argc, char const *argv[])
{
    if (argc < 2) return 0;

    int n = atoi(argv[1]);

    printf("%i! = %i\n", n, factorial(n));

    return 0;
}