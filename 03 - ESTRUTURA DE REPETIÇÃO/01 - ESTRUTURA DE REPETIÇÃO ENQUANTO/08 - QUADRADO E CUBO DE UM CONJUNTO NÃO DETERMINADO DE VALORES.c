#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
	int num = 1;
	float quadrado, cubo;
	printf("entre com 0 ou negativo para parar...\n\n");
	while (num > 0) {
		printf("Insere um numero: ");
		scanf("%d", &num);
		
		if (num > 0) {
			quadrado = pow(num, 2);
			cubo = pow(num, 3);
			printf("\no quadrado do %i, eh igual a %3.2f\n\n", num, quadrado);
			printf("o cubo do %d, eh igual a %3.
			
			     2f\n\n", num, cubo);
		}	
	}
	system ("pause");
	return 0;
}
