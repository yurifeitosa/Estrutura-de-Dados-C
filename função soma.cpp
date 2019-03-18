#include <stdio.h>
#include <conio.h>
int soma (int x, int y)
 {
  return(x+y);
 }
 int multiplica (int x, int y)
 {
  return(x*y);
 }

 main()
 {
  int a, b;
  printf ("Digite um valor inteiro: ");
  scanf ("%d",&a);
  printf ("Digite outro valor inteiro: ");
  scanf ("%d",&b);
  printf ("\nO valor da soma entre estes numeros e: %d",soma(a,b));
  printf ("\nO valor da multiplicação entre estes numeros e: %d",multiplica(a,b));
  getch();
 }
