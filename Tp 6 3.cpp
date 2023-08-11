#include <stdio.h>

int i;
double det;
int uno[3];
int dos[3];
int tres[3];
int tam = 3;
int tam2 = 3;
int tam3 = 3;

double determinante( int uno[],int tam, int dos[],int tam2,int tres[],int tam3){
	
	det = uno[0]*(dos[1]*tres[2]-dos[2]*tres[1])+uno[1]*(-dos[0]*tres[2]+tres[0]*dos[2])+uno[2]*(dos[0]*tres[1]-dos[1]*tres[0]);
	return 0;
}
	
	int main (){
		
		printf("\nIngrese de a un numero a la vez la primera \ncolumna, y luego las otras\n");
		for(i=0;i<3;i++) scanf("\n%d",&uno[i]);
		for(i=0;i<3;i++) scanf("\n%d",&dos[i]);
		for(i=0;i<3;i++) scanf("\n%d",&tres[i]);
		
		determinante(uno,tam,dos,tam,tres,tam);
		
		printf("\nEl determinante de la matriz de 3x3 es: %.2lf",det);
		
		return(0);
		
	}
