/* e4.c: Imprime una tabla de conversion de Celsius a Fahrenheit con titulo. */
#include <stdio.h>

int main(void)
{
    int lower, upper, step;
    float celsius, fahr;

    lower = 0;      /* limite inferior en grados Celsius */
    upper = 100;    /* limite superior */
    step = 10;      /* tamano del incremento */
    celsius = lower;

    printf("%4s %6s\n", "C", "F");
    printf("---- ------\n");

    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
