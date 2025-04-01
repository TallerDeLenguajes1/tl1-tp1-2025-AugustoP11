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
    printf("\nContenido del puntero es: %d\n", punteroA);

    printf("\nDireccion de memoria almacenada por el puntero es: %d\n", punteroA);

    printf("\nDireccion de memoria de la variable: %d\n", &numeroA);

    printf("\nDireccion de memoria del puntero: %d\n\n", &punteroA);

    printf("Tamanio de memoria utilizado por la variable: %d", sizeof(numeroA));

    printf("\n\nhola mundo");

    getchar();
    getchar();
    return 0;
}