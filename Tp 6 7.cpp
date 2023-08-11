#include <stdio.h>

	void producto_matricial(float matriz1[3][3], float matriz2[3][3], float resultado[3][3]) {
	int i, j, k;
	
	
	for(i = 0; i < 3; i++) {        
		for(j = 0; j < 3; j++) {
			resultado[i][j] = 0;     
		}
	}
	

	for(i = 0; i < 3; i++) {                                                               
		for(j = 0; j < 3; j++) { 
			for(k = 0; k < 3; k++) { 
				resultado[i][j] += matriz1[i][k] * matriz2[k][j];     
			}
		}
	}
}

	int main() {
	
	int i, j;
	float matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	float matriz2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	float resultado[3][3];
	
	producto_matricial(matriz1, matriz2, resultado);
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%f ", resultado[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
	
	
/*En la funci�n, primero se inicializa la matriz resultado en 0 utilizando un 
bucle "for" anidado.Es necesario para asegurar que todos los elementos de la 
matriz est�n inicializados correctamente antes de la multiplicaci�n.Luego, 
se utiliza otro conjunto de bucles "for" anidados para la multiplicaci�n de las
matrices. El bucle m�s externo repite sobre las filas de la matriz resultado
siguiente bucle repite sobre las columnas y el bucle m�s interno realiza la 
multiplicaci�n y suma de los elementos de cada fila de la matriz matriz1 con los 
elementos correspondientes de cada columna de la matriz matriz2.Finalmente, en 
la funci�n main, se declaran las matrices matriz1, matriz2 y resultado y se le 
asignan los valores correspondientes. Luego, se llama a la funci�n 
producto_matricial pasando las matrices como argumentos.Despu�s de realizar la 
multiplicaci�n, se imprime el contenido de la matriz resultado por pantalla 
utilizando nuevamente bucles "for" anidados. Cada elemento se imprime utilizando 
la funci�n printf*/
	
	
	
