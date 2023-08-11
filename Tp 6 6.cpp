#include <stdio.h>

void contar_Letra(char letra, char cadena[], int *contador) {
	*contador = 0; 
	int i;
	for (i = 0; cadena[i] != '\0'; i++) {
		if (cadena[i] == letra) {
	(*contador)++;		}
	}
}

int main() {
	char letra;
	char cadena[100];
	int contador;
	
	printf("Ingrese una letra: ");
	scanf("%c", &letra);
	
	printf("Ingrese una cadena: ");
	scanf(" %[^\n]", cadena);
	
	contar_Letra(letra, cadena, &contador);
	
	printf("La letra '%c' aparece %d veces en la cadena.\n", letra, contador);
	
	return 0;
}
/*En este c�digo, la funci�n contar_Letras recibe como argumentos la letra que 
se desea contar y la cadena de caracteres en la que se quiere buscar. La funci�n 
utiliza un ciclo while para recorrer la cadena y comparar  cada car�cter con la 
letra recibida. Si el car�cter es igual a la letra, se incrementa un contador. 
Al finalizar el ciclo, la funci�n devuelve el valor del contador.
En la funci�n main, se le pide al usuario que ingrese una letra y una cadena  
Luego, se llama a la funci�n contar_Letras con los valores ingresados 
y se imprime el resultado.*/
