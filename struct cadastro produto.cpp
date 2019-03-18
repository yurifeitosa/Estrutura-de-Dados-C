#include <stdio.h>
#include <stdlib.h>
struct cadProduto{
	int codigo;
	char nome[30];
	float valor;
	int qtd;
};
cadProduto produto[10];
int i,j;
int main()
	{
		for (i=1;i<=10;i++)
		{
		printf ("Digite o codigo do produto %d: ",i);
		scanf("%d", &produto[i].codigo);
		printf ("Digite o nome do produto %d: ",i);
		scanf("%s", produto[i].nome);	
		printf ("Digite o valor do produto %d: ",i);
		scanf("%f", &produto[i].valor);
		printf ("Digite a quantidade do produto %d: ",i);
		scanf("%d", &produto[i].qtd);	
		system("cls");
		}
		
		for (j=1;j<=10;j++)
		{
		printf("\nProduto %d: \n",j);
		printf("Codigo %d\n", produto[j].codigo);
		printf("Nome %s\n", produto[j].nome);
		printf("valor %f\n", produto[j].valor);
		printf("Quantidade %d\n", produto[j].qtd);
		printf("\n");
		}
		return(0);
}
	
