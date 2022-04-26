#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrar_invertido(char *string)
{
    if (*string == 0) return;

    mostrar_invertido(string+1);
    printf("%c", *string);
}

// void mostrar_invertido_it(char *string)
// {
//     int tope = strlen(string);
//     for (int i = tope-1; i>=0; i--) {
//         printf("%c", string[i]);
//     }
// }

int main(int argc, char const *argv[])
{
    if (argc < 2) return 0;

    mostrar_invertido(argv[1]);

    return 0;
}