#include <stdio.h>

int potenciaCuadratica(int a);
void potenciaCuadratica2(int a);

void infoVariable(int *a);

void invertir(int *a,int *b);

void orden(int *a, int *b);

int main()
{
    int numero1 = 2, numero2 = 5;

    printf("\nNumero1: %d", numero1);
    printf("\nNumero2: %d", numero2);
    printf("\nEl cuadrado del numero 1 es: %d", potenciaCuadratica(numero1));

    potenciaCuadratica2(numero2);

    infoVariable(&numero1);

    invertir(&numero1, &numero2);
    printf("\nNumero1 tiene el valor 2, y ahora es %d", numero1);
    printf("\nNumero2 tiene el valor 5, y ahora es %d", numero2);

    orden(&numero1, &numero2);
    printf("\nEl numero mayor es: %d", numero2);
    printf("\nEl numero menor es: %d", numero1);
    
    return 0;
}

void orden(int *a, int *b){
    int c;
    if (*a > *b)
    {
        c = *a;
        *a = *b;
        *b = c;
    }
    
}

void invertir(int *a,int *b){
    int a1 = *a;
    *a = *b;
    *b = a1;
}

int potenciaCuadratica(int a){
    return a*a;
}

void infoVariable(int *a){
    printf("\nDireccion de memoria de la variable: %p", a);
    printf("\nContenido de la variable: %d", *a);
}

void potenciaCuadratica2(int a){
    printf("\nEl cuadrado del numero %d es: %d", a, a*a);
}