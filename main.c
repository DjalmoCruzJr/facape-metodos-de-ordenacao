/*************************************************************/
/* Programa Principal										 */
/*************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include "metodos-ordenacao.h"

#define BUBBLESORT 	  1
#define SELECTIONSORT 2
#define INSERTIONSORT 3
#define QUICKSORT 	  4
#define SAIR		  0

#define MAX			  100

/*************************************************************/
/* Prototipos de Funcoes Auxiliares 						 */
/*************************************************************/
void cabecalho(void);
int menu(void);
void gerarNumeros(int *numeros, int inicio, int limite, int qtd);

/*************************************************************/
/* Funcao Principal											 */
/*************************************************************/
int main(int argc, char *argv[])
{
	int i, qtd, inicio, limite;
	int numeros[MAX];
	
	cabecalho();
	
	for(;;)
	{
		switch(menu()) {
			case BUBBLESORT:
				printf("\n\nInforme o limite inferior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &inicio);
				
				printf("\n\nInforme o limite superior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &limite);
				
				printf("\n\nInforme a qtd de numeros a serem gerados: ");
				fflush(stdin);
				scanf("%d", &qtd);
				
				if(qtd > MAX)
				{
					printf("\n\nQtd. de numeros nao suportada!");
					printf("\nO programa suporta a geracao de apenas %d numeros.");
					printf("\nPara gerar mais numeros, altere a constante MAX do");
					printf("\narquivo 'main.c' e recompile o projeto.");
					printf("\n\nPressione qualquer tecla para continuar...");
					getch();
				}
				
				gerarNumeros(numeros, inicio, limite, qtd);	
				printf("\n\nNUMEROS GERADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
				
				printf("\n\nRealizando o processo de ordenacao...");
				
				bubblesort(numeros, qtd); /* Realiza a ordenacao */
				printf("\n\nNUMEROS ORDENADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
								
				printf("\n\nPressione qualquer tecla para continuar...");
				getch();			
			break;
			
			case SELECTIONSORT:
				printf("\n\nInforme o limite inferior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &inicio);
				
				printf("\n\nInforme o limite superior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &limite);
				
				printf("\n\nInforme a qtd de numeros a serem gerados: ");
				fflush(stdin);
				scanf("%d", &qtd);
				
				if(qtd > MAX)
				{
					printf("\n\nQtd. de numeros nao suportada!");
					printf("\nO programa suporta a geracao de apenas %d numeros.");
					printf("\nPara gerar mais numeros, altere a constante MAX do");
					printf("\narquivo 'main.c' e recompile o projeto.");
					printf("\n\nPressione qualquer tecla para continuar...");
					getch();
				}
				
				gerarNumeros(numeros, inicio, limite, qtd);	
				printf("\n\nNUMEROS GERADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
				
				printf("\n\nRealizando o processo de ordenacao...");
				
				selectionsort(numeros, qtd); /* Realiza a ordenacao */
				printf("\n\nNUMEROS ORDENADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
								
				printf("\n\nPressione qualquer tecla para continuar...");
				getch();			
			break;
			
			case INSERTIONSORT:
				printf("\n\nInforme o limite inferior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &inicio);
				
				printf("\n\nInforme o limite superior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &limite);
				
				printf("\n\nInforme a qtd de numeros a serem gerados: ");
				fflush(stdin);
				scanf("%d", &qtd);
				
				if(qtd > MAX)
				{
					printf("\n\nQtd. de numeros nao suportada!");
					printf("\nO programa suporta a geracao de apenas %d numeros.");
					printf("\nPara gerar mais numeros, altere a constante MAX do");
					printf("\narquivo 'main.c' e recompile o projeto.");
					printf("\n\nPressione qualquer tecla para continuar...");
					getch();
				}
				
				gerarNumeros(numeros, inicio, limite, qtd);	
				printf("\n\nNUMEROS GERADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
				
				printf("\n\nRealizando o processo de ordenacao...");
				
				insertionsort(numeros, qtd); /* Realiza a ordenacao */
				printf("\n\nNUMEROS ORDENADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
								
				printf("\n\nPressione qualquer tecla para continuar...");
				getch();			
			break;
			
			case QUICKSORT:
				printf("\n\nInforme o limite inferior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &inicio);
				
				printf("\n\nInforme o limite superior do intervalo de geracao: ");
				fflush(stdin);
				scanf("%d", &limite);
				
				printf("\n\nInforme a qtd de numeros a serem gerados: ");
				fflush(stdin);
				scanf("%d", &qtd);
				
				if(qtd > MAX)
				{
					printf("\n\nQtd. de numeros nao suportada!");
					printf("\nO programa suporta a geracao de apenas %d numeros.");
					printf("\nPara gerar mais numeros, altere a constante MAX do");
					printf("\narquivo 'main.c' e recompile o projeto.");
					printf("\n\nPressione qualquer tecla para continuar...");
					getch();
				}
				
				gerarNumeros(numeros, inicio, limite, qtd);	
				printf("\nNUMEROS GERADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
				
				printf("\n\nRealizando o processo de ordenacao...");
				
				quicksort(numeros, qtd); /* Realiza a ordenacao */
				printf("\nNUMEROS ORDENADOS: ");
				for(i = 0; i < qtd; i++)
					printf("%d ", numeros[i]);
								
				printf("\n\nPressione qualquer tecla para continuar...");
				getch();			
			break;
			
			case SAIR:
				printf("\nPressione qualquer tecla para finalizar...");
				getch();
				exit(0);
				
			default: continue;
		}
	}	
	return 0;
}

/*************************************************************/
/* Implementacao das Funcoes Auxiliares 					 */
/*************************************************************/
void cabecalho(void)
{
	printf("\nProjeto	: Metodos de Ordenacao");
	printf("\nCriado por: DjalmoCruzJr");
	printf("\nDescricao : Implementacao em C e aplicacao dos conceitos");
	printf("\n\treferentes aos metodos de ordenacao sobre numeros inteiros.");
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
}

int menu(void)
{
	int opcao;	
	do
	{		
		system("cls");
		printf("\n\n\tMENU DE OPCOES\n");
		printf("\nOpcaoes disponiveis.\n");
		printf("\n[1] - BubbleSort");
		printf("\n[2] - SelectionSort");
		printf("\n[3] - InsertionSort");
		printf("\n[4] - QuickSort");
		printf("\n[0] - Sair");
		printf("\n\nInforme sua opcao: ");
		fflush(stdin);
		scanf("%d", &opcao);
		
		if(opcao < 0 || opcao > 4)
		{
			printf("\n\nOpcao invalida. VERIFIQUE!");
			printf("\nPressione qualquer tecla para continuar...");
			getch();
			continue;			
		}
	}while(opcao < 0 || opcao > 4);
	return opcao;
}

void gerarNumeros(int *numeros, int inicio, int limite, int qtd)
{
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < qtd; i++) 
		numeros[i] = inicio + rand() % limite;
}
