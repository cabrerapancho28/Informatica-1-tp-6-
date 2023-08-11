#include <stdio.h>
	void intercam(int *x1, int *x2) {
	int temp = *x1;
	*x1 = *x2;
	*x2 = temp;
	}
    
	int main() {
	int x1 = 2023;
	int x2 = 2024;
	int *pa = &x1;
	int *pb = &x2;

	printf("Valores antes de intercambiar: x1 = %d, x2 = %d\n", x1, x2);
	intercam(pa, pb);
	printf("Valores después de intercambiar: x1 = %d, x2 = %d\n", x1, x2);
	
	return (0);
	
}
