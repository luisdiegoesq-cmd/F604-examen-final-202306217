# Examen final F604 - Ejercicios de C

* **Nombre:** Luis Diego López Pérez
* **Carné:** 202306217

## Cómo compilar y ejecutar

Para compilar y ejecutar cualquier ejercicio sin advertencias:

    mkdir -p bin
    gcc -Wall -o bin/e1 e1.c
    ./bin/e1

Para compilar los 10 ejercicios de una sola vez:

    for f in e*.c; do gcc -Wall -o "bin/${f%.c}" "$f"; done

Los ejercicios 5 al 10 leen desde la entrada estándar hasta EOF (Ctrl+D en Linux/Git Bash o Ctrl+Z + Enter en Windows), o bien redirigiendo un archivo de prueba:

    ./bin/e6 < prueba.txt

## Estado de los ejercicios

| Ejercicio | Archivo | Estado | Notas |
| :--- | :--- | :--- | :--- |
| 1 | e1.c | Completo | Lectura e impresión de un entero con scanf y printf. |
| 2 | e2.c | Completo | Lectura de cadena de nombre y saludo personalizado. |
| 3 | e3.c | Completo | Tabla Fahrenheit a Celsius con encabezado y bucle while. |
| 4 | e4.c | Completo | Tabla Celsius a Fahrenheit con división real y anchos de campo. |
| 5 | e5.c | Completo | Elimina espacios y tabulaciones finales y omite líneas en blanco. |
| 6 | e6.c | Completo | Imprime únicamente líneas mayores a 80 caracteres. |
| 7 | e7.c | Completo | Invierte cada línea usando la función propia reverse(s). |
| 8 | e8.c | Completo | Reemplaza cadenas de múltiples espacios por un solo espacio. |
| 9 | e9.c | Completo | Hace visibles tabulaciones y retrocesos. |
| 10 | e10.c | Completo | Histograma horizontal de longitudes de palabras. |
