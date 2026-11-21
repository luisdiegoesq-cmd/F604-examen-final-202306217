/* e10.c: Construye un histograma horizontal segun la cantidad de letras de cada palabra. */
#include <stdio.h>

#define TOPE_LONGITUD 50

int main(void)
{
    int caracter_actual;
    int largo_actual = 0;
    int indice;
    int marca;
    int frecuencia_largos[TOPE_LONGITUD + 1];

    for (indice = 0; indice <= TOPE_LONGITUD; indice++) {
        frecuencia_largos[indice] = 0;
    }

    while ((caracter_actual = getchar()) != EOF) {
        if (caracter_actual == ' ' || caracter_actual == '\t' ||
            caracter_actual == '\n' || caracter_actual == '\r') {
            if (largo_actual > 0) {
                if (largo_actual > TOPE_LONGITUD) {
                    largo_actual = TOPE_LONGITUD;
                }
                frecuencia_largos[largo_actual]++;
                largo_actual = 0;
            }
        } else {
            largo_actual++;
        }
    }

    if (largo_actual > 0) {
        if (largo_actual > TOPE_LONGITUD) {
            largo_actual = TOPE_LONGITUD;
        }
        frecuencia_largos[largo_actual]++;
    }

    printf("Histograma de longitudes\n");
    for (indice = 1; indice <= TOPE_LONGITUD; indice++) {
        if (frecuencia_largos[indice] > 0) {
            printf("%3d | ", indice);
            for (marca = 0; marca < frecuencia_largos[indice]; marca++) {
                putchar('*');
            }
            printf(" %d\n", frecuencia_largos[indice]);
        }
    }

    return 0;
}
