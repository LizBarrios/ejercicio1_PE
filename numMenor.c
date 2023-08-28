//BARRIOS RETANA LIZETH
//27-AGO-23
//Algoritmo que lea 3 números y desplegar cuál número es el menor y su valor
//BRL_ACT1_7_932

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
    if (num1 > num2){
        if (num2 < num3){
            printf("numero menor: %.2f",num2);
        }
        else{
            printf("numero menor: %.2f",num3);
        }
    }
    else {
        printf("numero merno: %.2f",num1);
    }
   return 0;     
}