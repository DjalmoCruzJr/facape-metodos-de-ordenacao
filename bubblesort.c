/****************************************************************/
/* Implementacao as funcoes da biblioteca 'metodos-pordenacao.h'*/
/* Criada por: DjalmoCruzJr								 	    */
/* Descricao: Implementacao de todas as funcoes envolvidas no   */
/* 			  processo de ordenacao atraves do metodo BubbleSort*/
/****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include "metodos-ordenacao.h"


void bubblesort(int *numeros, int qtdNum)
{
     int i, j;    
     for(i = 0; i < qtdNum; i++)
         for(j = 1; j < qtdNum-i; j++)
			if(numeros[j-1] > numeros[j])
				troca(&numeros[j-1], &numeros[j]);
}

