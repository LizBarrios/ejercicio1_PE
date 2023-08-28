//BARRIOS RETANA LIZETH 372813
//27-AGO-23
//Programa que sirva para calcular el salario semanal de un trabajador
//BRL_ACT1_10_932

#include<stdio.h>
int main (){
    float hora,normal,semana,extra,total;
    int i,acumulador1=0, acumulador2=0;
    printf("horas trabajadas en la semana: ");
    scanf("%f",&semana);
    printf("salario por hora: ");
    scanf("%f",&hora);
        if (semana > 40){
            for (i = 40; i < semana && i < 50; i++){
            acumulador1 ++;
        }
        for (i = 50; i < semana ; i++){
            acumulador2 ++;
        }
        }
        extra = (( hora * 2 ) * acumulador1) + (( hora * 3 )* acumulador2 );
        normal = hora * ( semana - (acumulador1 + acumulador2));
        total= extra + normal;
        printf("salario normal: %.2f\n",normal);
        printf("salario extra: %.2f\n",extra);
        printf("salario total: %.2f\n",total);
    return 0;
}