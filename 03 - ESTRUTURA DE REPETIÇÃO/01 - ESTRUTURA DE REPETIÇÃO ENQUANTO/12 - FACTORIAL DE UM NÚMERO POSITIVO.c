#include <stdio.h>
#include <stdlib.h>

main () {
	int cont, fatorial, num;
	printf("digite um valor: ");
	scanf("%d", &num);
	if (num < 0) {
		while (num < 0) {
			printf("digite um valor: ");
			scanf("%i", &num);
			cont = num;
			fatorial = 1;
			while (cont > 1) {
				fatorial *= cont;
				cont--;
			}
		}
	}
	else {
		cont = num;
		fatorial = 1;
		while (cont > 1) {
			fatorial *= cont;
			cont--;
		}
	}
	printf("\n%d! eh igual a %i\n\n", num, fatorial);
	system("pause");
	return 0;
}
