#include <stdio.h>
#include <conio.h>
int main()
{
    int vetor[5];
    int codigo;
    for (int i=0;i<5;i++){
        printf("Digite o elemento %i: ",i+1);
        scanf("%i",&vetor[i]);
    }
    printf("Digite 1 para ordem direta e 2 para ordem inversa: ");
    scanf ("%i",&codigo);
    if (codigo==1){
        for (int i=0;i<5;i++){
            printf ("%i ",vetor[i]);
        }
    }
    else if (codigo==2){
        for (int i=4;i>=0;i--){
            printf ("%i ",vetor[i]);
        }
    }
    else{
        printf("Codigo invalido");
    }
    getch();
    }
