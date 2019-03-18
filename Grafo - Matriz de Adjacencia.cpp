//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define maximo 10

//Vari�veis
int tamanho=0;
int grafo[maximo];  
int ma[maximo][maximo];  
int op=1;

//Prototipa��o
int grafo_tamanho();
void grafo_desenhar();
void grafo_desenhar_ma();
void grafo_inserir();
void grafo_remover();
void menu_mostrar();

//Fun��o Principal
main(){
 setlocale(LC_ALL,"portuguese");
  while (tamanho <= 0 || tamanho > maximo){
    tamanho = grafo_tamanho();
    if(tamanho <= 0 || tamanho > maximo) {
      system("cls");
      printf("Escolha um valor entre 1 e %d!\n\n", maximo);       
    }
    else {
      for(int i=0; i<tamanho;i++){
        grafo[i]=i;
      }     
    }
  }  
  while (op != 0) {
    system("cls");  
    grafo_desenhar();
    grafo_desenhar_ma();
    menu_mostrar();    
    scanf("%d", &op);
    switch (op) {
      case 1:
        grafo_inserir();
      break;
      case 2:
        grafo_remover();
      break;
    }      
  }  
  system("Pause");
  return(0);       
}

//Defini to n�mero de v�rtices do Grafo
int grafo_tamanho(){
  int tamanho;  
  printf("Escolha a quantidade de vertices do grafo: ");
  scanf("%d", &tamanho);  
  return tamanho;
}

//Fun��o para desenhar o vetor de v�rtices
void grafo_desenhar(){
  //Desenhando lista de v�rtices
  printf("Listas de vertices\n[  ");         
  for (int i = 0; i < tamanho; i++){
    printf("%d  ", grafo[i]);          
  }
  printf("]\n\n");      
}  

//Fun��o para desenhar a matriz de arestas
void grafo_desenhar_ma(){
  //Desenhando matriz de adjac�ncias
  printf("Matriz de adjacencias\n[\n");         
  for (int i = 0; i < tamanho; i++){
    for (int j = 0; j < tamanho; j++){
      printf("   %d", ma[i][j]);          
    }
    printf("\n");             
  }
  printf("]\n\n");      
}  

//Inserir aresta
void grafo_inserir(){
  int num1, num2;
  system("cls");
  printf("Escolha o vertice de origem entre 0 a %d: ",tamanho-1);         
  scanf("%d",&num1);
  printf("Escolha o vertice de destino entre 0 a %d: ",tamanho-1);         
  scanf("%d",&num2);  
  if (num1 > tamanho-1 || num2 > tamanho-1 || num1 <0  || num2 <0){
    printf("\nOs valores precisam estar entre 0 e %d\n\n",tamanho);              
    system("pause");
  }
  else {
    ma[num1][num2]=1;
    ma[num2][num1]=1;     
  }
}  

//Remover aresta
void grafo_remover(){
  int num1, num2;
  system("cls");
  printf("Escolha o vertice de origem entre 0 a %d: ",tamanho);         
  scanf("%d", &num1);
  printf("Escolha o vertice de destino entre 0 a %d: ",tamanho);         
  scanf("%d", &num2);  
  if (num1 > tamanho-1 || num2 > tamanho-1 || num1 <0  || num2 <0){
    printf("\nOs valores precisam estar entre 0 e %d\n\n",tamanho);              
    system("pause");
  }
  else {
    ma[num1][num2]=0;
    ma[num2][num1]=0;     
  }
}  

//Mostrar o menu de op��es
void menu_mostrar() {
  printf("\nEscolha uma op��o:\n");        
  printf("1 - Inserir aresta\n");            
  printf("2 - Remover aresta\n");            
  printf("0 - Sair\n\n");           
}
