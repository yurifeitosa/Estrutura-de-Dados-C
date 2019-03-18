#include <stdio.h>
#include <conio.h>

struct t_aluno
{
   int ra;
   char nome[50];
   float nota;       
};   //Precisa de ponto e vírgula
       
t_aluno alunos[100];
int n_registros=0;

void recebeDados(t_aluno &al) //passagem por referência sem ponteiros
{
     printf ("Ra:");
     scanf ("%d",&(al.ra));
     printf ("Nome:");
     fflush(stdin); //Para limpar o buffer do Windows
     scanf("%[A-Z a-z0-9]",al.nome); //Nova forma de scanf
     printf ("Nota:");
     scanf ("%f",&(al.nota));
}

void mostraDados(t_aluno &al) //Não precisaria ser por referência
{
   printf ("%d %s %f\n",al.ra,al.nome,al.nota);
}

int main(int argc, char *argv[])
//o argc é o numero de parametros na linha de comando que vai digitar.
//*argv[] é um vetor de string, onde cada string do vetor é um comando que voce vai digitou na linha de comando
{
    t_aluno aux;
    int op;
    do
    {
        printf ("[1] Inserir\n");
        printf ("[2] Listar\n");
        printf ("[0] Sair\n");
        printf ("Opcao:");
        scanf("%d",&op);
        switch (op)
        {
            case 1: recebeDados(alunos[n_registros++]);
                    break;
            case 2: printf ("Listando os dados\n");
                    for (int i=0;i<n_registros;i++)
                    {
                        mostraDados(alunos[i]);
                    }
                    break;
        }
    }while (op!=0);
}
