#include <iostream>

using namespace std;

void aumentar_valor(O_HEAP *vetor, int elemt, int valor){
	if(vetor->chave[elemt-1] > valor)
		cout << "ERROR" << endl;
	else{
		vetor->cha´ve[elemt-1] = valor;
		heapify_up(vetor,elemt);
	}
}