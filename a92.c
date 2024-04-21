#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_PONTOS 1000000

double monte_carlo_pi() {
	register int dentro_circulo = 0;
	register double x, y;
	register unsigned int i;
	
	for (i = 0; i < TOTAL_PONTOS; i++) {
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		
		if (x * x + y * y <= 1.0) {
			dentro_circulo++;
		}
	}
	
	return 4.0 * dentro_circulo / TOTAL_PONTOS;
}

int main() {
	srand(time(NULL));
	
	double pi = monte_carlo_pi();
	printf("Valor de pi aproximado: %f\n", pi);
	
	return 0;
}