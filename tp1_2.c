#include<stdio.h>


//Declaracion de funciones
float numeroAlCuadrado(float numero);
void numeroAlCuadradoVoid(float numero);
void mostrarDireccionYContenido(float variable);
void invertir(int a, int b);
void orden(int a, int b);

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
    printf("\nDireccion de la variable: %f\n", &variable);
    printf("\nContenido de la variable: %f\n", variable);
}

void invertir(int a, int b) {
    int aux;
    aux = b;
    b = a;
    a = aux;

    printf("\nValor de la variable a: %d\n", a);
    printf("\nValor de la variable b: %d", b);
}

void orden(int a, int b) {
    int aux;

    if (a==b)
    {
        printf("\nNumero a: %d\n", a);
        printf("Numero b: %d\n", b);
    } else if (a < b)
    {
        printf("\nNumero a: %d\n", a);
        printf("Numero b: %d\n", b);
    } else {
        aux = b;
        b = a;
        a = aux;
        printf("\nNumero a: %d\n", a);
        printf("Numero b: %d\n", b);
    }   
}