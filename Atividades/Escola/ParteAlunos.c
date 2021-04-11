#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>

typedef struct dados_dada{
    int dia;
    int mes; 
    int ano;
} data;

typedef struct dados_aluno {
    char nomealuno [100];
    char sexoaluno [10];
    long long int cpfaluno;
    int matriculaaluno;
    data datanascimento;
} aluno;

typedef struct dados_professor {
    char nomeprof [100];
    char sexoprof [10];
    long long int cpfprof;
    int matriculaaluno;
    data datanascimento;
} professor;

typedef struct dados_disciplina {
    char nomedisci [100];
    int semestre;
    char professor [100];
    int codigo;
} disciplina;

typedef struct aluno_disciplina{
    char nomeal [100];
    int codad;
} alunodisciplina;

professor lista_professores [qtprofessores];
aluno lista_alunos [qtalunos];
disciplina lista_disciplinas [qtdisciplinas];
alunodisciplina lista_matricula [alunopordisciplina];



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

  