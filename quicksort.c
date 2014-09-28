/***********************************************************************/
/* Implementacao as funcoes da biblioteca 'metodos-pordenacao.h'	   */
/* Criada por: DjalmoCruzJr								 	    	   */
/* Descricao: Implementacao de todas as funcoes envolvidas no processo */
/* 			   de ordenacao atraves do metodo QuickSort				   */
/***********************************************************************/
#include "metodos-ordenacao.h"

void quicksort(int *numeros, int qtdNum)
{
	sort(numeros, 0, qtdNum-1);
}

void sort(int *numeros, int esquerda, int direita)
{
	int i, j, pivo, temp;
	
	i    = esquerda;
	j    = direita;
	pivo = numeros[(esquerda+direita)/2];
	
	do {
		while(numeros[i] < pivo && i < direita)  i++;
		while(pivo < numeros[j] && j > esquerda) j--;
		
		if(i <= j)
		{
			troca(&numeros[i], &numeros[j]);
			i++; j--;
		}
	}while(i <= j);
	
	if(esquerda < j) sort(numeros, esquerda, j);
	if(i < direita)  sort(numeros, i, direita);
}
