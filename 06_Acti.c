#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Realizar un cuadrado con asteriscos, el numero de filas y columnas se le pedira al usuario, el numero debe ser entre 2 y 10.
    int num;
    printf("Ingrese un numero entre el 2 al 10: ");
    scanf("%d", &num);

    if (num >= 2 && num <= 10)
    {
        for (int i = 1; i <= num; i++)
        {
           for(int j = 1; j <= num; j++)
           {
            if (i == 1 || i == num || j == 1 || j == num)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
           }
           printf("\n");
        }
    }
    else
    {
        printf("Error: El numero debe estar entre 2 y 10\n");
    }
    
    return 0;
}
