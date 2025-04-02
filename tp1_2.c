#include<stdio.h>


//Declaracion de funciones
float numeroAlCuadrado(float numero);
void numeroAlCuadradoVoid(float numero);
void mostrarDireccionYContenido(float variable);

//funcion main
int main() {



    getchar();
    getchar();
    return 0;
}

//Definicion de funciones
float numeroAlCuadrado(float numero)
{
    float cuadrado;
    cuadrado = numero * numero;
    return (cuadrado);
}

void numeroAlCuadradoVoid(float numero) {
    float cuadrado;
    cuadrado = numero * numero;
    printf("\nEl cuadrado de %.2f es: %.2f\n", numero, cuadrado);
}

void mostrarDireccionYContenido(float variable) {
    printf("\nDireccion de la variable: %f", &variable);
    printf("\nContenido de la variable: %f\n", variable);
}