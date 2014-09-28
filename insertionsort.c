/***********************************************************************/
/* Implementacao as funcoes da biblioteca 'metodos-pordenacao.h'	   */
/* Criada por: DjalmoCruzJr								 	    	   */
/* Descricao: Implementacao de todas as funcoes envolvidas no processo */
/* 			   de ordenacao atraves do metodo InsertionSort			   */
/***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include "metodos-ordenacao.h"

void insertionsort(int *numeros, int qtdNum)
{
	int i, j, temp;
	
	for(i = 1; i < qtdNum; ++i)
	{
		temp = numeros[i];
		for(j = i-1; j >= 0 && temp < numeros[j]; j--)
			troca(&numeros[j+1], &numeros[j]);
		numeros[j+1] = temp;
	}
}
