#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/* declaracao de funcoes */
void mensagem (void);
int lendo_parcela(void);
int soma (int a, int b);
void quad_soma (int x);

/* funcao principal main */
int main ( ){

    /* declaracao de variaveis locais */
    int a, b, total;

    /* chamadas de função */
    mensagem ();
    a= lendo_parcela();
    b= lendo_parcela();

    /* chamada por valor */
    total=soma(a,b);
    printf("soma=%d\n", total);
    /* chamada por valor */
    quad_soma(total);
    return 0;
    system("pause");
} // fim da main

/* definicao de funcoes */
void mensagem (void){
    printf(" Entre com dois valores inteiros\n");
}

int lendo_parcela (void){
    int p;
    scanf("%d", &p);
    return p;
}

int soma (int a, int b){
    int s;
    s=a+b;
    return s;
}

void quad_soma (int x){
    printf("quadrado da soma =%.1f\n\n", pow(x,2));
} // fim do programa
