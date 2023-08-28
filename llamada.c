//BARRIOS RETANA LIZETH 372813
//27-AGO-23
//Algoritmo que sirva para desplegar el Total de una llamada telefónica donde se pide como datos de entrada los  minutos y el  tipo de llamada
//BRL_ACT1_11_932

#include <stdio.h>

int main() {
    float minutos, tipo, iva, subtotal, total;
    float na, nd;
    int i, acu = 0;

    printf("Cuantos minutos fueron\n");
    scanf("%f", &minutos);
    
    printf("Tipo de llamada\n");
    printf("local         =1\n");
    printf("nacional      =2\n");
    printf("internacional =3\n");
    scanf("%f", &tipo);

    if (tipo == 1) {
        subtotal = 3;
    } else if (tipo == 2) {
        for (i = 3; i < minutos; i++) {
            acu++;
        }
        na = 7 * (minutos - acu);
        nd = 2 * acu;
        subtotal = na + nd;
    } else if (tipo == 3) {
        for (i = 2; i < minutos; i++) {
            acu++;
        }
        na = 9 * (minutos - acu);
        nd = 4 * acu;
        subtotal = na + nd;
    }

    iva = subtotal * 0.16;
    total = subtotal + iva;

    printf("Subtotal = %f\n", subtotal);
    printf("IVA = %f\n", iva);
    printf("Total = %f\n", total);

    return 0;
}
