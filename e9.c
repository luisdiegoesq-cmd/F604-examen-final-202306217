/* e9.c: Hace visibles las tabulaciones y retrocesos usando secuencias de tres caracteres. */
#include <stdio.h>

int main(void)
{
    int tecla_entrada;

    while ((tecla_entrada = getchar()) != EOF) {
        if (tecla_entrada == '\t') {
            putchar('>');
            putchar('\b');
            putchar('-');
        } else if (tecla_entrada == '\b') {
            putchar('<');
            putchar('\b');
            putchar('-');
        } else {
            putchar(tecla_entrada);
        }
    }

    return 0;
}
