/* e5.c: Elimina espacios y tabulaciones al final de cada linea y omite lineas en blanco. */
#include <stdio.h>

#define MAXLINE 4096

int leer_linea(char linea[], int limite);
int recortar_linea(char linea[]);

int main(void)
{
    char linea[MAXLINE];

    while (leer_linea(linea, MAXLINE) > 0) {
        if (recortar_linea(linea) > 0) {
            printf("%s", linea);
        }
    }

    return 0;
}

int leer_linea(char linea[], int limite)
{
    int c;
    int i = 0;

    while (i < limite - 1 && (c = getchar()) != EOF && c != '\n') {
        linea[i] = c;
        i++;
    }
    if (c == '\n') {
        linea[i] = c;
        i++;
    }
    linea[i] = '\0';

    return i;
}

int recortar_linea(char linea[])
{
    int i = 0;
    int tiene_salto = 0;

    while (linea[i] != '\0') {
        if (linea[i] == '\n') {
            tiene_salto = 1;
        }
        i++;
    }
    i--;

    while (i >= 0 && (linea[i] == ' ' || linea[i] == '\t' || linea[i] == '\n')) {
        i--;
    }

    if (i < 0) {
        linea[0] = '\0';
        return 0;
    }

    if (tiene_salto) {
        i++;
        linea[i] = '\n';
    }
    i++;
    linea[i] = '\0';

    return i;
}
