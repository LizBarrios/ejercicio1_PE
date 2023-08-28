//BARRIOS RETANA LIZETH 372813
//27-AGO-23
/*
    Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar:
        Si prom < 30 Repetir 
        Si prom >=30 y prom <60 extraordinario 
        Si prom >=60 y prom <70 suficiente 
        Si prom >=70 y prom <80 Regular 
        Si prom >=80 y prom <90 bien 
        Si prom >=90 y prom <98 muy bien 
        Si prom >=98 y prom <=100 excelente 
        Si prom >100 Error en promedio 
*/
//BRL_ACT1_6_932
#include <stdio.h>
int main() 
{
    float calif1, calif2, calif3;
    float promedio;

    printf("Ingrese la calificación del 1 al 100: \n");
    scanf("%f",&calif1);
    printf("Ingrese la calificación del 1 al 100: \n");
    scanf("%f",&calif2);
    printf("Ingrese la calificación del 1 al 100: \n");
    scanf("%f",&calif3);
    promedio=(calif1 + calif2 + calif3)/3;

    printf("El promedio es: %.2f\n", promedio);

    if (promedio < 30) 
    {
        printf("Repetir");
    } 
    else if (promedio >= 30 && promedio < 60) 
    {
        printf("Extraordinario\n");
    } 
    else if (promedio >= 60 && promedio < 70) 
    {
        printf("Suficiente\n");
    } 
    else if (promedio >= 70 && promedio < 80) 
    {
        printf("Regular\n");
    } 
    else if (promedio >= 80 && promedio < 90) 
    {
        printf("Bien\n");
    } 
    else if (promedio >= 90 && promedio < 98) 
    {
        printf("Muy bien\n");
    } 
    else if (promedio >= 98 && promedio <= 100) 
    {
        printf("Excelente\n");
    } 
    else 
    {
        printf("Error en promedio\n");
    }
    return 0;
    // no entendi a que se referia por el lado falso o verdadero :(
}