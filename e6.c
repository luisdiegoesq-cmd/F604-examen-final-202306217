/* e6.c: Imprime unicamente las lineas de la entrada que tienen mas de 80 caracteres. */
#include <stdio.h>

#define LIMITE 80

int main(void)
{
    int c;
    int longitud = 0;
    char inicio[LIMITE];

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (longitud > LIMITE) {
                putchar('\n');
            }
            longitud = 0;
        } else {
            if (longitud < LIMITE) {
                inicio[longitud] = c;
            } else if (longitud == LIMITE) {
                int i;
                for (i = 0; i < LIMITE; i++) {
                    putchar(inicio[i]);
                }
                putchar(c);
            } else {
                putchar(c);
            }
            longitud++;
        }
    }

    return 0;
}
