#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>
//definição de constantes
char sexo1[4] = "M";
char sexo2[4] = "m";
char sexo3[4] = "F";
char sexo4[4] = "f";
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
    int sexook = 0
    int cpfok = 0
    printf ("Vocês escolheu a lista de cadastro de alunos\n");
    prinft ("Digite o nome do aluno\n");
    setbuf(stdin, NULL);
	fgets(lista_alunos[qtalunos].nomealuno, 100, stdin);
    printf ("Insira o sexo do aluno -  M ou F: \n");
    setbuf(stdin, NULL);
	fgets(lista_alunos[qtalunos].sexoaluno, 10, stdin);
    if (strcpm (sexoaluno, sexo1 != 0) && strcpm (sexoaluno, sexo2 != 0) && strcpm (sexoaluno, sexo3 != 0) && strcpm (sexoaluno, sexo4 != 0))
        {
            oksexo = 1;
            while (oksexo == 1)
            {
            prinft ("O sexo é inválido. Digite novamente  M OU F: \n");
            fgets (sexoaluno, sizeof(sexoaluno), stdin);
            }
        }
        else
        {
            printf("O sexo é válido\n ");
        }
    
}

  