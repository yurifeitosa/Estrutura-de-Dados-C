#include <stdio.h>
  int quadrado (int x) {
    return (x * x);
 }
 
 void saudacao (void) {
    printf ("Olá!\n");
 }
  void despedida (void) {
    printf ("Fim do programa.\n");
 }
  int main () {
    int numero, resultado;
    saudacao ();
 
    printf ("Digite um número inteiro: ");
    scanf ("%d", &numero);
    resultado = quadrado (numero);
    printf ("O quadrado de %d é %d.\n", numero, resultado);
 
    despedida ();
    return 0;
 }
