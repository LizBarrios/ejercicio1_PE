//BARRIOS RETANA LIZETH 372813
//27-AGO-23
//Algoritmo que lea 3 números y desplegar cuál número es el del medio y su valor
//BRL_ACT1_8_932

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
    if ( num1 < num2){
        if (num2 < num3 ){
            printf ("el numero del medio es: %.2f", num2);
            }
        else if (num1<num3){
            printf ("el numero del medio es: %.2f", num3);
        }
        else {
        printf("el numero del medio es: %.2f", num1);
        }
    }
    else {
        if (num1<num3)
        {
            printf("el numero del medio es: %.2f", num1);
        }
        else if (num2<num3){
            printf("el numero del medio es: %.2f", num3);
        }
        else {
            printf("el numero del medio es: %.2f", num2);
        }
    }
   return 0;     
}