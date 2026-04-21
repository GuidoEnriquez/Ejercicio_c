#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*Pedir al usuario un numero n y mostrar su tabla de multiplicar del 1 al 10 usando While.*/
	
	int numero = 0;
	int resultado =0;
	int i = 1;
	printf("ingrese un Valor Numerico: ");
	scanf("%d", &numero);
	
	while(i <= 10){
		resultado = numero * i;
		printf( "%d ",i);
		printf("x %d ", numero);
		printf("= %d \n", resultado);
		i++;
	}
	
	return 0;
}

