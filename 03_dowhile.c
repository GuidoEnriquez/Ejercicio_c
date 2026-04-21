#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Do While
	Un programa que pida enteros positivos y los sume, se frena cuando el usuario ingresa un negativo o un 0.
	Mostrar total y el resultado de la suma.
	*/
	
	int num, sum = 0;
	
	do{
		printf("Ingrese un Numero: ");
		scanf("%d", &num);
		sum = sum + num;

	}while(num > 0);
	
	printf("El resultado total de la suma es: %d", sum);
	
	return 0;
}

