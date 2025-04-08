#include<stdio.h>

int cuadrado(int num);
void cuadradoB(int num);
void variable(int *num);

int main()
{
    int numero, suCuadrado;

    printf("Ingresar un numero para calcular su cuadrado:");
    scanf("%d",&numero);

    suCuadrado = cuadrado(numero);
    printf("El cuadrado de %d es: %d\n", numero, suCuadrado);

    printf("Funcion del apartado b):\n");
    cuadradoB(numero);

    variable(&numero);

    return 0;
}

int cuadrado(int num)
{
    int cuadradoNum=0;

    if (num !=0)
    {
        cuadradoNum = num*num;
    }else
    {
        cuadradoNum = 0;
    }
    
    return(cuadradoNum);
}

void cuadradoB(int num)
{
    int cuadradoNum = 0;

    if (num!=0)
    {
        cuadradoNum = num * num;
    }else
    {
        cuadradoNum = 0;
    }
    
    printf("El cuadrado del numero %d es: %d\n", num, cuadradoNum);
}

void variable(int *num)
{
    printf("La direccion de la variable es: %p\nSu contenido es: %d", num, *num);
}