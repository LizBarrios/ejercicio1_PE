//BARRIOS RETANA LIZETH
//27-AGO-23
//Algoritmo que lea 3 números y desplegar los 3 números en orden ascendente
//BRL_ACT1_9_932

#include <stdio.h>
int main ()
{
    float num1, num2, num3;
    printf("ingrese el primer numero: \n");
    scanf("%f",&num1);
    printf("ingrese el segundo numero: \n");
    scanf("%f",&num2);
    printf("ingrese el tercer numero: \n");
    scanf("%f",&num3);
    // visto de un tutorial :)
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Mostrar los números en orden ascendente
    printf("Los números en orden ascendente son: %.2f, %.2f, %.2f\n", num1, num2, num3);

    return 0;
}