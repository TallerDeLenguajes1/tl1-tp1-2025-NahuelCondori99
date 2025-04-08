#include<stdio.h>

int cuadrado(int num);
void cuadradoB(int num);
void variable(int *num);
void invertir(int a, int b);
void orden(int a, int b);

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

    int valorA, valorB;

    printf("Ingresar el valor de A:");
    scanf("%d",&valorA);

    printf("Ingresar el valor de B:");
    scanf("%d",&valorB);

    invertir(valorA, valorB);

    orden(valorA, valorB);

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
    printf("La direccion de la variable es: %p\nSu contenido es: %d\n", num, *num);
}

void invertir(int a, int b)
{
    int auxiliar = 0;

    printf("El valor de A = %d\nEl valor de B = %d\n", a, b);

    auxiliar = b;
    b = a;
    a = auxiliar;

    printf("***Valores invertidos***\nValor de A = %d\nValor de B = %d\n", a, b);
}

void orden(int a, int b)
{
    int menor = 0, mayor = 0;

    if (a > b)
    {
        menor = b;
        mayor = a;
    }else
    {
        menor = a;
        mayor = b;
    }
    
    printf("%d - %d\n", menor, mayor);
}