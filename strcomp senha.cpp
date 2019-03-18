#include <stdio.h>
#include <locale.h>
#include <string.h>
main (){
char senha[6],senha2[6];
setlocale (LC_ALL,"");
printf ("Digite uma senha de seis digitos: ");
scanf ("%s",senha);
printf ("Confirmer a senha de seis digitos: ");
scanf ("%s",senha2);
	if (strcmp(senha,senha2)==0){
		printf("Sua senha está confirmada\n");		
		} else 		{
		printf("Senha errada\n");
} }

