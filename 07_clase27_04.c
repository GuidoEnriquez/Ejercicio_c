#include <stdio.h>

//programa que ingrese insumos, cantidad y precio, luego imprima el total a pagar, el programa se repetira hasta que el usuario decida salir.

int main(int argc, char const *argv[])
{
    char insumo[20];
    float precio, total = 0;
    int cantidad;
    char opcion;

    printf("-----BIENVENIDO AL PROGRAMA DE CALCULO DE INSUMOS-----\n");
    do
    {
        printf("Ingrese el nombre del insumo: ");
        scanf("%s", insumo);

        printf("Ingrese la cantidad: ");
        scanf("%d", &cantidad);

        printf("Ingrese el precio: $");
        scanf("%f", &precio);

        total += cantidad * precio;

        
        printf("Desea ingresar otro insumo? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');

    printf("-----RESUMEN DE SU COMPRA-----\n");
    printf("Total a pagar: $%.2f\n", total);
    



    return 0;
}
