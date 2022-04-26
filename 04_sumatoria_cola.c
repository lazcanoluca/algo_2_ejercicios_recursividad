#include <stdio.h>
#include <stdlib.h>

int sumatoria_rec (int n, int parcial)
{
    if (n == 0) return parcial;
    return sumatoria_rec(n-1, n + parcial);
}

int sumatoria (int n)
{
    return sumatoria_rec(n, 0);
}

int main(int argc, char const *argv[])
{
    if (argc < 2) return -1;

    int n = atoi(argv[1]);

        printf("%i! = %i\n", n, sumatoria(n));

    return 0;
}