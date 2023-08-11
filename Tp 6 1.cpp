#include <stdio.h>
#include <math.h>

typedef struct {
	double real;
	double imaginario;
}Complejo;

void rect_a_polar(Complejo c, double* modulo, double* tita) {
	*modulo = sqrt(pow((c.real), 2) + pow((c.imaginario), 2));
	*tita = atan2(c.imaginario, c.real);
}

void polar_a_rect(double modulo, double tita, Complejo* c) {
	
	c->real = modulo * cos(tita);
	c->imaginario = modulo * sin(tita);
}


int main(void) {
	Complejo numRectangular = {3, 2};
	double modulo, tita;
	
	
	printf("Número complejo en forma rectangular: %f + %fi\n", numRectangular.real, numRectangular.imaginario);
	rect_a_polar(numRectangular, &modulo, &tita);
	printf("Número complejo en forma polar: %f / %f\n",modulo, tita);
	polar_a_rect(modulo, tita, &numRectangular);
	printf("Número complejo en forma rectangular nuevamente: %f + %fi\n",numRectangular.real, numRectangular.imaginario);
	
	
	
	return 0;
}
