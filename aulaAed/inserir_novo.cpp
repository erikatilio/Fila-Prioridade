#include <stdio.h>

void inserir_novo (O_HEAP *vetor, int vetor)
{
        vetor->no_elem++;
        vetor->chave[vetor->no_elem-1] = valor;
        heapify_up(vetor, vetor->no_elem);
}
