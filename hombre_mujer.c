//BARRIOS RETANA LIZETH
//27-AGO-23
//Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER ) preguntar al usuario cual es su SEXO y desplegar la leyenda “HOLA, ERES HOMBRE ”, “ HOLA, ERES MUJER”
//BRL_ACT1_4_932

#include <stdio.h>
int main ()
{
    int op;
    printf("Favor de ingresar el numero que corresponda con su sexo: \n");
    printf("1. HOMBRE\n");
    printf("2. MUJER\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("HOLA, ERES HOMBRE");
        break;
    case 2:
        printf("HOLA, ERES MUJER");
        break;
    default:
        printf("NUMERO INVALIDO");
        break;
    }
    return 0;
}