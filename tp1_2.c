#include<stdio.h>

int cuadrado(int num);

int main()
{
    int numero, suCuadrado;

    print("Ingresar un numero para calcular su cuadrado:");
    scanf("%d",&numero);

    suCuadrado = cuadrado(numero);
    printf("El cuadrado de %d es: %d\n", numero, suCuadrado);

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