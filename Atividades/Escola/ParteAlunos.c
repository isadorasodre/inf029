#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>

//declaração de estruturas - data, professor, aluno, disciplina e aluno por disciplina
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

// declaração de vetores das structs
professor lista_professores [qtprofessores];
aluno lista_alunos [qtalunos];
disciplina lista_disciplinas [qtdisciplinas];
alunodisciplina lista_matricula [alunopordisciplina];

//declarações das funções que serão usadas ao longo do programa
void alunos ();
void listaralunos ();
void professores ();
void listarprofessores ();
int conferirdata (int mes, int dia, int ano);
int validacpf (long long int cpf);

//variáveis globais
int qtalunos, qtprofessores, qtdisciplinas = 0;

int main (){
    int op;
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

void aluno ()
{
    printf ("Vocês escolheu a lista de cadastro de alunos\n");
    prinft ("Digite o nome do aluno\n");
    setbuf(stdin, NULL);
	fgets(vAlunos[qtdAlunos].nome, 100, stdin);
}

  