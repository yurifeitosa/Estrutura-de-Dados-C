#include <stdio.h>
int main(void){
	int n[3], soma;
	float media;
	int i;
	soma = 0;
	for(i=0; i<4; i++){
		printf("Digite a nota %d: ",i+1);		
		scanf("%d", &n[i]);
		soma += n[i];
	}
	media = soma / 4;
	printf("\nA media eh %.2f\n", media);	
	return(0);
}
