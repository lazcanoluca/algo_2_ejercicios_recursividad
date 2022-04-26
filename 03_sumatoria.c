#include <stdio.h>
#include <stdlib.h>

int sumatoria (int n)
{
    if (n == 0) return 0;
    return n + sumatoria(n-1);
}

int main(int argc, char const *argv[])
{
    if (argc < 2) return -1;

    int n = atoi(argv[1]);

    printf("Sum 0 a %i = %i\n", n, sumatoria(n));

    return 0;
}
