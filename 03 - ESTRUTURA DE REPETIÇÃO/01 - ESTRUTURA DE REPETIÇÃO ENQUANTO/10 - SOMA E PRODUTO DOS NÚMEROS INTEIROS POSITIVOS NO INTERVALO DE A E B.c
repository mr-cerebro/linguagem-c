#include <stdio.h>
#include <stdlib.h>

main () {
	int aux, num1, num2, produto = 1, soma = 0;
	printf("qual eh o primeiro valor? ");
	scanf("%d", &num1);
	printf("qual eh o segundo valor? ");
	scanf("%i", &num2);
	if (num1 > 0 && num2 > 0) {
		if (num2 > num1) {
			aux = num1 + 1;
			while (aux < num2) {
				soma += aux;
				produto *= aux;
				aux++;
			}
		}
		printf("\na soma no intervalo de %d e %i eh igual a %d\n\n", num1, num2, soma);
		printf("o produto no intervalo de %i e %d eh igual a %i\n\n", num1, num2, produto);
	} else printf("digite apenas numeros naturais\n\n");
	system("pause");
	return 0;
}
