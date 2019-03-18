#include <stdio.h>
#include <conio.h>
int matriz [3] [3];
int i, j, maior=0, soma=0;
float media;
main()
 {
   for (i=0;i<=2;i++)
   for (j=0;j<=2;j++)
    {
     printf ("Digite um valor inteiro [%d,%d]: ",i+1,j+1);
     scanf ("%d",&matriz[i][j]);
     soma=soma+matriz[i][j];
     if (matriz[i][j]>maior)
      maior=matriz[i][j];
    }
  media=soma/9;
  printf ("\n\nMaior valor encontrado na matriz: %d",maior);
  printf ("\nMedia dos valores da matriz: %.2f\n\n", media);
  
  for (i=0;i<=2;i++){
  
   for (j=0;j<=2;j++)
   	printf ("%5d",matriz[i][j]);
   printf ("\n");
   }
  getch();
 }
