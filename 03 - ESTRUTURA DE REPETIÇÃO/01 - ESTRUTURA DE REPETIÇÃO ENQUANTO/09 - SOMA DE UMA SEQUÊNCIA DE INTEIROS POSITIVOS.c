#include <stdio.h>
#include <stdlib.h>

main () {
	int num = 0, soma = 0;
	
	while (num >= 0) {
		printf("insere um valor: ");
		scanf("%d", &num);
		if (num >= 0) 
			soma += num;
		
	}
	printf("\na soma vale: %d\n\n", soma);
	system("pause");
	return 0;
}
