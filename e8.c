/* e8.c: Copia la entrada hacia la salida colapsando espacios seguidos en uno solo. */
#include <stdio.h>

int main(void)
{
    int caracter_leido;
    int ultimo_fue_espacio = 0;

    while ((caracter_leido = getchar()) != EOF) {
        if (caracter_leido == ' ') {
            if (ultimo_fue_espacio == 0) {
                putchar(' ');
                ultimo_fue_espacio = 1;
            }
        } else {
            putchar(caracter_leido);
            ultimo_fue_espacio = 0;
        }
    }

    return 0;
}
