// Ponce Matias Augusto - TRABAJO PRACTICO 1 - Ejercicio 3)a)
#include<stdio.h>

int main() {
    //Declaro una variable de tipo entero
    int numeroA = 10;

    //Declaro un puntero de tipo entero
    int *punteroA;

    //Hago que el puntero apunte a la variable
    punteroA = &numeroA;

    //Muestro el contenido del puntero
    printf("\nEl contenido del puntero es: %d\n", punteroA);

    printf("\nhola mundo");

    getchar();
    getchar();
    return 0;
}