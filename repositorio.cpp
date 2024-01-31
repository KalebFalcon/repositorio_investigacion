#include <stdio.h>

int main()
{
    char nombre[25];
    float no_1;
    int entero;
    char caracter;
    float dato;
    float dato_2;

    printf("supongamos que funciona?\?\r\n");
    printf("ingrese un nombre: ");
    scanf("%s", nombre);
    printf("ingrese un numero con punto decimal: ");
    scanf("%f", &no_1);
    printf("ingrese un numero entero decimal: ");
    scanf("%i", &entero);
    printf("ingrese un caracter: ");
    scanf("%c", &caracter);
    printf("ingrese un valor para optener su base y exponente: ");
    scanf("%e", &dato);
    printf("ingrese un valor con base: ");
    scanf("%f", &dato_2);

    printf("\t\\Datos ingresados:\\\v \n %s \n %.2f \n %i \n %c \n %e \n %f",
    nombre, no_1, entero, caracter, dato, dato_2);

    printf("hola");

    return 0;
}