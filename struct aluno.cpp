#include <stdio.h>
#include <conio.h>
struct aluno {
  char nome[30];
  int notas[4];
 };
main()
 {
  struct aluno vet_aluno[3];
  int i, j, in, maior=0;
  for (i=0;i<3;i++)
   {
    printf ("Digite o nome do aluno[%d]: ",i+1);
    scanf("%s",&vet_aluno[i].nome);
	     for (j=0;j<4;j++)
	      {
	       printf ("Digite a nota do bimestre %d para o aluno %d: ",j+1,i+1);
	       scanf ("%d",&vet_aluno[i].notas[j]);
	      }
			     if (vet_aluno[i].notas[2]>=maior)
			     {
			      maior=vet_aluno[i].notas[2];
			      in=i;
			     }
     }
     printf ("\n\nO aluno de maior nota no 3º bim e: %s",vet_aluno[in].nome); 
	 printf ("\ncom a nota: %d", vet_aluno[in].notas[2]);
	 getch();
 }

