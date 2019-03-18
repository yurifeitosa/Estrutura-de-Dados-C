#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n[5][4], soma[5];
	float media;
	int i,j;
		for(i=0; i<5; i++){
		printf("Digite as notas do aluno %d\n", i+1);
		soma[i]=0;
		for(j=0; j<4; j++){
			printf("Digite a nota %d: ",j+1);		
			scanf("%d", &n[i][j]);
			soma[i] += n[i][j];			
		}
		media = soma[i] / 4;
		printf("\nA media eh %.2f\n", media);			
		system("pause");		
		system("cls");
	}
	return(0);
}
