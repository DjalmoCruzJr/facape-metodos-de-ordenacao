/*************************************************************/
/* Biblioteca 'metodos-ordenacao.h'							 */
/* Criada por: DjalmoCruzJr								 	 */
/*************************************************************/

#ifndef  _METODOS_ORDENACAO_H_
#define _METODOS_ORDENACAO_H_

/******************************************************************/
/* Parametros: int *numeros - vetor contendos os todos os numeros */
/*  		   int qtd		- quantidade de numeros do vetor      */
/******************************************************************/
void bubblesort(int *numeros, int qtdNum);

/******************************************************************/
/* Parametros: int *numeros - vetor contendos os todos os numeros */
/*  		   int qtd		- quantidade de numeros do vetor      */
/******************************************************************/
void selectionsort(int *numeros, int qtdNum);

/******************************************************************/
/* Parametros: int *numeros - vetor contendos os todos os numeros */
/*  		   int qtd		- quantidade de numeros do vetor      */
/******************************************************************/
void insertionsort(int *numeros, int qtdNum);


/******************************************************************/
/* Parametros: int *numeros - vetor contendos os todos os numeros */
/*  		   int qtd		- quantidade de numeros do vetor      */
/******************************************************************/
void quicksort(int *numeros, int qtdNum);

/******************************************************************/
/* Parametros: int *v1 - valor que vai trocar de posicao com v2   */
/*  		   int *v2 - valor que vai trocar de posicao com v1   */
/******************************************************************/
void troca(int *v1, int *v2);

#endif
