/* e1.c: Lee un valor entero desde la entrada estandar e imprime el resultado. */
#include <stdio.h>

int main(void)
{
    int val;

    printf("Ingrese un valor entero\n");
    if (scanf("%d", &val) == 1) {
        printf("Salida: %d\n", val);
    }

    return 0;
}
