//funções úteis

typedef struct{
	int chave[MAX];
	int no_elem;
}O_HEAP;
//aumentar
void aumentar_valor(O_HEAP *vetor, int elemt, int valor){
	if(vetor->chave[elemt-1] > valor)
		cout << "ERROR" << endl;
	else{
		vetor->cha´ve[elemt-1] = valor;
		heapify_up(vetor,elemt);
	}
}

//heapify
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

//heapify_up
void heapfy_up(O_HEAP *vetor, int novo){
	int i = novo , tmp;

	while (i >= 2 && (vetor->chave[(i/2) - 1] < vetor->chave[i-1])){
		tmp = vetor->chave[(i/2)-1];
		vetor->chave[(i/2)-1] = vetor->chave[i-1];
		vetor->chave[i-1] = tmp;
		i = (i/2);
	}
}

//remover máximo
int remover_maximo(O_HEAP *hp){
	int maximo = hp->chave[0];
	hp->chave[0] = hp->chave[hp->no_elem - 1];
	hp->no_elem--;
	heapify(hp, 1);
	return maximo;
}

//remover minimo
int remover_minimo(O_HEAP * hp)
{
        hp->no_elem--;
}
