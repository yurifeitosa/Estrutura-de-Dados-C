#include <stdio.h>

void repete (char texto [], int n){
	int i;
	for (i=0;i<n;i++){
		printf ("%s\n", texto);
	}
}
int main (){
	char palavra [20];
	int y;
	printf ("Digite uma palavra: ");
	scanf ("%s",palavra);
	printf ("Digite a quantiade de repetições: ");
	scanf ("%d",&y);
	
	repete (palavra,y);
	return 0;
}
