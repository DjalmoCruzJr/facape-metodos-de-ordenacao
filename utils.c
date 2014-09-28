/***********************************************************************/
/* Implementacao as funcoes da biblioteca 'metodos-pordenacao.h'	   */
/* Criada por: DjalmoCruzJr								 	    	   */
/* Descricao: Implementacao de todas as funcoes auxiliares			   */
/***********************************************************************/
#include "metodos-ordenacao.h"

void troca(int *v1, int *v2)
{
	int temp;
	temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}
