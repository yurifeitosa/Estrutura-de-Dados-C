#include <stdio.h>
  int quadrado (int x) {
    return (x * x);
 }
 
 void saudacao (void) {
    printf ("Ol�!\n");
 }
  void despedida (void) {
    printf ("Fim do programa.\n");
 }
  int main () {
    int numero, resultado;
    saudacao ();
 
    printf ("Digite um n�mero inteiro: ");
    scanf ("%d", &numero);
    resultado = quadrado (numero);
    printf ("O quadrado de %d � %d.\n", numero, resultado);
 
    despedida ();
    return 0;
 }
