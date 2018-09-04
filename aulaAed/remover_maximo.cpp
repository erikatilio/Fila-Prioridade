#include <stdio.h>

int remover_maximo(O_HEAP *hp){
	int maximo = hp->chave[0];
	hp->chave[0] = hp->chave[hp->no_elem - 1];
	hp->no_elem--;
	heapify(hp, 1);
	return maximo;
}