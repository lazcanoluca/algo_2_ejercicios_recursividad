#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
    if (n == 0) return 1;
    return n * factorial(n-1);
}

int main(int argc, char const *argv[])
{
    if (argc < 2) return 0;

    int n = atoi(argv[1]);

    printf("%i! = %i\n", n, factorial(n));

    return 0;
}
