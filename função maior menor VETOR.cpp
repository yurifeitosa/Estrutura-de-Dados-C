#include <stdio.h>
#include <conio.h>
mval(int x, int v[]){
	int aux, i;
	for(i=0;i<x;i++){
		if(aux<v[i]){
			aux=v[i];
		}
	}
	return aux;
}
meval(int x, int v[]){
	int aux, i, meval;
	meval=v[0];
	for(i=0;i<x;i++){
			if(v[i]<meval){
			meval=v[i];
		}
	}
	return meval;
	}
main (){
int  i, x;
printf("Quantos numeros serao comparados ? ");
scanf("%i", &x);
int v[x];	
for(i=0;i<x;i++){
	printf("\nInsira o valor %i: ", i+1);	
	scanf("%i", &v[i]);
}
printf("O maior valor e: %i",mval(x,v));
printf("\nO menor valor e: %i",meval(x,v));
}
