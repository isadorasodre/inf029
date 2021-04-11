#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>
typedef struct {
    char nomealuno;
    char sexoaluno;
    long long int cpfaluno;
    int matriculaaluno;
    struct data
	{
		int diaaluno;
		int mesaluno;
		int anoaluno;
	} dataaluno;
} cadastroaluno;
int cadastraralunos (cadastroaluno alunos [], int qtdalunos);

int main (){
    int op;
    cadastroaluno alunos [4];
    int qtdalunos = 0;
    return 0;
    do{
    printf ("*****BEM-VINDO AO PROJETO ESCOLA\n");
    printf ("ESCOLHA UMA OPÇÃO\n");
    printf ("1 - CADASTRO DE ALUNOS\n");
    printf ("2 - LISTAR ALUNOS\n");
    printf ("3 - SAIR DO PROGRAMA \n");
    scanf ("%d", &op);
    switch (op)
        {
            case 1:
            {
                cadastraralunos ();
            }
            return 0;
        }   
    }while (op != 3);
    printf("Você escolheu sair do programa. Obrigado pela sua participação");
    return 0;
}
int cadastraralunos (cadastroaluno alunos [], int qtdalunos)
    {
    int i = 0;
    printf ("Digite o nome do aluno\n");
    scanf("%c", cadastroaluno alunos[i].nomealuno);
    }
    }

  