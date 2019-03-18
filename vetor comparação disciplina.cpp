#include <stdio.h>
#include <string.h>
#include <conio.h>
int main (void){
	char nome[30];
	printf ("Digite o nome da disciplina: ");
	scanf("%s",nome);
	//if (nome == "algoritmos"){
	if (strcmp(nome,"algoritmos")==0){
		printf("Voce acertou a disciplina\n");		
		printf("Tem %d caracteres",strlen(nome));
	} else {
		printf("Voce errou a disciplina\n");
		printf("\n%s\n", nome);		
		printf("Tem %d caracteres",strlen(nome));		
	}
 getch();
	return(0);
   
}
