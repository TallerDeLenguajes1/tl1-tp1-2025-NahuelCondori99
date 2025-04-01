#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero=10;
    int *puntero;
    puntero = &numero;

    printf("Contenido del puntero: %d\n",*puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n",puntero);
    printf("Direccion de memoria de la variable: %p\n",&numero);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamanio de memoria utilizada por la variable: %d\n", sizeof(numero));

    return 0;
}