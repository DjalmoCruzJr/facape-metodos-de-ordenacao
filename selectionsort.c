/***********************************************************************/
/* Implementacao as funcoes da biblioteca 'metodos-pordenacao.h'	   */
/* Criada por: DjalmoCruzJr								 	    	   */
/* Descricao: Implementacao de todas as funcoes envolvidas no processo */
/* 			   de ordenacao atraves do metodo SelectionSort			   */
/***********************************************************************/
#include "metodos-ordenacao.h"

void selectionsort(int *numeros, int qtdNum)
{
	int i, j, k, mudar;
	
	for(i = 0; i < qtdNum-1; i++)
	{
		mudar = 0;
		k = i;
		for(j = i+1; j < qtdNum; j++)
		{
			if(numeros[j] < numeros[k])
			{
				k = j;
				mudar = 1;
			}			
		}
		if(mudar)
			troca(&numeros[i], &numeros[k]);
	}
}
