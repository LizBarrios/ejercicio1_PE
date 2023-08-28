//BARRIOS RETANA LIZETH 372813
//27-AGO-23
//Es un algoritmo que lee un número entero, y desplegar si el número es “PAR” o “IMPAR”
//BRL_ACT1_2_932

#include <stdio.h>
int main()
{
    int num;
    printf("ingrese el numero a evaluar: ");
    scanf("%d",&num);
    if ((num%2) == 0)
    {
        printf("el numero %d es par",num);
    }
    else
    {
        printf("el numero %d es impar",num);
    }
    return 0;
}