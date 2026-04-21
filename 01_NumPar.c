#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Mostrar por pantalla los numeros pares del 2 al 20 usando un bucle for.*/
	
	for(int i = 2; i<=20; i+=2){
		if(i % 2 == 0){
			printf ("%d \n", i);
		}
	}
	return 0;
}

