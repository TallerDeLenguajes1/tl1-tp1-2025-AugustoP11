#include<stdio.h>


//Declaracion de funciones
float numeroAlCuadrado(float numero);
void numeroAlCuadradoVoid(float numero);
void mostrarDireccionYContenido(float *pvariable);
void invertir(int a, int b);
void orden(int a, int b);

//funcion main
int main() {
    float numeroReal, cuadradoReal;
    int numeroA, numeroB;

    //Pruebo funcion a)
    printf("\nUso la funcion a) para elevar el numero 5 al cuadrado.\n");
    numeroReal = 5;
    cuadradoReal = numeroAlCuadrado(numeroReal);
    printf("%.2f al cuadrado es: %.2f", numeroReal, cuadradoReal);

    //Pruebo funcion b)
    printf("\n\nUso la funcion void b) para elevar el numero 8 al cuadrado.\n");
    numeroReal = 8;
    numeroAlCuadradoVoid(numeroReal);

    //Pruebo la funcion c)
    printf("\n\nUso la funcion c) para mostrar en pantalla la direccion y el contenido de una variable.\n");
    mostrarDireccionYContenido(&numeroReal);

    //Pruebo la funcion d)
    printf("\n\nPruebo la funcion d), sean a=10 y b=8\n");
    numeroA = 10;
    numeroB = 8;
    invertir(numeroA, numeroB);

    //Pruebo la funcion e)
    printf("\n\nPruebo la funcion e), sean a=15 y b=2\n");
    numeroA = 15;
    numeroB = 2;
    orden(numeroA, numeroB);


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

void mostrarDireccionYContenido(float *pvariable) {
    printf("\nDireccion de la variable: %d\n", &pvariable);
    printf("\nContenido de la variable: %f\n", *pvariable);
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