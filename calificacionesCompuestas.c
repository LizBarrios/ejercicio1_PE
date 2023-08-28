//BARRIOS RETANA LIZETH
//22-AGO-23
//Es un algoritmo que lee 4 calificaciones de un alumno, calcula y desplega el promedio acompañado de la leyenda APROBADO o REPROBADO
//BRL_ACT1_3_932
#include<stdio.h>
int main()
{
    float cal1,cal2,cal3,cal4,Final;
    printf("ingresa la  primera calificacione del 1 al 100: \n");
    scanf("%f",&cal1);
    printf("ingresa la  segunda calificacione del 1 al 100: \n");
    scanf("%f",&cal2);
    printf("ingresa la  tercera calificacione del 1 al 100: \n");
    scanf("%f",&cal3);
    printf("ingresa la  cuarta calificacione del 1 al 100: \n");
    scanf("%f",&cal4);
    Final=(cal1+cal2+cal3+cal4)/4;
    printf("tu promedio es: %.2f\n",Final);
    if (Final>=60)
    {
        printf("APROBADO");
    }
    else
    {
        printf("REPROBADO");
    }
    return 0;
}