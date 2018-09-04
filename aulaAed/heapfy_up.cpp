void heapfy_up(O_HEAP *vetor, int novo){
	int i = novo , tmp;

	while (i >= 2 && (vetor->chave[(i/2) - 1] < vetor->chave[i-1])){
		tmp = vetor->chave[(i/2)-1];
		vetor->chave[(i/2)-1] = vetor->chave[i-1];
		vetor->chave[i-1] = tmp;
		i = (i/2);
	}
}