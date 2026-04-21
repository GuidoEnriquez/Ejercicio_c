#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Mostrar el siguiente patron de asteriscos usando bucles for anidados.
	*
	**
	*
	**
	****/
	int filas;
	
	printf("Ingrese la altura: ");
	scanf("%d", &filas);
	
	for(int i = 1; i <= filas; i++) {
		for(int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

