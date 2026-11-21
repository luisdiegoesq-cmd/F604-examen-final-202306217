/* e7.c: Invierte cada linea de la entrada estandar usando la funcion reverse(s). */
#include <stdio.h>

#define MAXLINE 4096

void reverse(char s[]);

int main(void)
{
    int c;
    int i = 0;
    char linea[MAXLINE];

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            linea[i] = '\0';
            reverse(linea);
            printf("%s\n", linea);
            i = 0;
        } else if (i < MAXLINE - 1) {
            linea[i] = c;
            i++;
        }
    }

    if (i > 0) {
        linea[i] = '\0';
        reverse(linea);
        printf("%s", linea);
    }

    return 0;
}

void reverse(char s[])
{
    int inicio = 0;
    int fin = 0;
    char temporal;

    while (s[fin] != '\0') {
        fin++;
    }
    fin--;

    while (inicio < fin) {
        temporal = s[inicio];
        s[inicio] = s[fin];
        s[fin] = temporal;
        inicio++;
        fin--;
    }
}
