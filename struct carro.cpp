#include <stdio.h>
#include <conio.h>

struct carro
 {
  char modelo[30];
  int ano;
  float preco;
  char placa[7];
 };

carro vet_carros[4];
int i, pos,posN,novo=0;
float barato=200000000;

main()
 {
  for (i=0;i<=3;i++)
   {
    printf ("\n");
	printf ("Digite o modelo do carro %d: ",i+1);
    scanf ("%s",vet_carros[i].modelo);
    printf ("Digite o ano do carro %d: ",i+1);
    scanf ("%d",&vet_carros[i].ano);
    printf ("Digite o preco do carro %d: ",i+1);
    scanf ("%f",&vet_carros[i].preco);
    printf ("Digite a placa do carro %d: ",i+1);
    scanf ("%s",vet_carros[i].placa);
    printf ("\n");
   }
      //barato=vet_carros[0].preco;

  for (i=0;i<=3;i++)
   {
    if (vet_carros[i].preco<barato)
     {
      barato=vet_carros[i].preco;
      pos=i;
     }
     if (vet_carros[i].ano>novo)
     {
      novo=vet_carros[i].ano;
      posN=i;
     }
   }

  printf ("\n\nO modelo do carro mais barato e: %s",vet_carros[pos].modelo);
  printf ("\nO ano do carro mais barato e: %d\n\n",vet_carros[pos].ano);
  
  printf ("\n\nO modelo do carro mais novo e: %s",vet_carros[posN].modelo);
  printf ("\nO preco do carro mais novo e: %f",vet_carros[posN].preco);
  
  getch();
  
 }
