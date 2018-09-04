#include <stdio.h>

void heapify(O_HEAP *vetor, int i){
	int l = 2*i-1 , r = 2*i , m = i-1 , temp;

	if(l < vetor->no_elem - 1 && vetor->chave[l] > vetor->chave[m])
		m = l;
	if(r < vetor->no_elem - 1 && vetor->chave[r] > vetor->chave[m])
		m = r;
	if(m!= i-1){
		temp = vetor->chave[i-1];
		vetor->chave[i-1] = vetor->chave[m];
		vetor->chave[m] = temp;
		heapify(vetor , m+1);
	}
}