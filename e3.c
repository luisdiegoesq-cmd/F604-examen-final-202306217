/* e3.c: Imprime una tabla de conversion de Fahrenheit a Celsius con titulo. */
#include <stdio.h>

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;      /* limite inferior de la tabla */
    upper = 300;    /* limite superior */
    step = 20;      /* tamano del incremento */
    fahr = lower;

    printf("%4s %6s\n", "F", "C");
    printf("---- ------\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
