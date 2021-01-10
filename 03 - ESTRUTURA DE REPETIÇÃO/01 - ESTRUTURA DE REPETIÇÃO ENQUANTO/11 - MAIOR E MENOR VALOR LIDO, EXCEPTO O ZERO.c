#include <stdio.h>
#include <stdlib.h>

main () {
	int cont = 0, maior, menor, num = 1;
	while (num != 0) {
		printf("insere um valor: ");
		scanf("%d", &num);
		if (cont = 0) {
			maior = num;
			menor = num;
		}
		if (num != 0) {
			if (num > maior) {
				maior = num;
			}
			if (num < maior) {
				menor = num;
			}
		}
		cont++;
	}
	printf("\no maior valor lido foi %i\n\n", maior);
	printf("o menor valor lido foi: %d\n\n", menor);
	system("pause");
	return 0;
}
