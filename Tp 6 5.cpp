#include <stdio.h>
#include <string.h>

void unir_Cadenas(char *resultado,  char *cadena1, char *cadena2) {
	strcpy(resultado, cadena1); 
	strcat(resultado, cadena2); 
}

int main() {
	char cadena1[100];
	char cadena2[100];
	char resultado[200];
	
	printf("Ingresa la primera cadena: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	cadena1[strcspn(cadena1, "\n")] = '\0'; 
	
	printf("Ingresa la segunda cadena: ");
	fgets(cadena2, sizeof(cadena2), stdin);
	cadena2[strcspn(cadena2, "\n")] = '\0'; 
	
	unir_Cadenas(resultado, cadena1, cadena2); 
	
	printf("La union de las cadenas es: %s\n", resultado);
	
	return 0;
}

/*En este ejercicio, la función unir_Cadenas recibe tres argumentos: resultado,
cadena1 y cadena2. "resultado" es un puntero a un arreglo de caracteres donde 
se almacenará la cadena resultante. "cadena1 y cadena2" son punteros a las 
cadenas de caracteres que se deben unir.Dentro de la función, se utiliza 
la función "strcpy" para copiar el contenido de cadena1 en resultado, y luego 
se utiliza strcat para unir el contenido de "cadena2" a resultado.
En el main, se declaran las variables cadena1, cadena2 y resultado como arreglos 
de caracteres. Se utiliza "fgets" para leer las cadenas desde  teclado y se 
elimina el salto de línea final utilizando "strcspn".Finalmente, se llama a la 
función unir_Cadenas pasando como argumentos las variables resultado, cadena1 y 
cadena2. Luego se imprime la cadena resultante utilizando printf.*/
