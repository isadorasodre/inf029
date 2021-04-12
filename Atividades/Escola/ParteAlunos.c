#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>
#include <string.h>
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
professor lista_professores [5];
aluno lista_alunos [5];
disciplina lista_disciplinas [5];
alunodisciplina lista_matricula [5];
data lista_data[10];

//declarações das funções que serão usadas ao longo do programa
void listaralunos ();
void alunos ();
void professores ();
void listarprofessores ();
int conferirdata (int mes, int dia, int ano);
int validacpf (long long int cpf);
void cadastradata ();

//variáveis globais
int qtalunos, qtprofessores, qtdisciplinas, qtdisciplinasalunos;

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
                alunos ();
            }
            return 0;
        }   
    }while (op != 3);
    printf("Você escolheu sair do programa. Obrigado pela sua participação");
    return 0;
}

void alunos ()
{
    int oksexo = 0;
    int okcpf = 0;
    printf ("Vocês escolheu a lista de cadastro de alunos\n");
    printf ("Digite o nome do aluno\n");
    setbuf(stdin, NULL);
	fgets(lista_alunos[qtalunos].nomealuno, 100, stdin);
    printf ("Insira o sexo do aluno -  M ou F: \n");
    setbuf(stdin, NULL);
	fgets(lista_alunos[qtalunos].sexoaluno, 10, stdin);
    if (strcpm (lista_alunos[qtalunos].sexoaluno, sexo1 != 0) && strcpm (lista_alunos[qtalunos].sexoaluno, sexo2 != 0) && strcpm (lista_alunos[qtalunos].sexoaluno, sexo3 != 0) && strcpm (lista_alunos[qtalunos].sexoaluno, sexo4 != 0))
        {
            oksexo = 1;
            while (oksexo == 1)
            {
            printf ("O sexo é inválido. Digite novamente  M OU F: \n");
            fgets(lista_alunos[qtalunos].sexoaluno, 10, stdin);
            }
        }
        else
        {
            printf("O sexo é válido\n ");
        }
    printf("Digite o cpf do aluno: ");
    scanf("%lld", &lista_alunos[qtalunos].cpfaluno);
        if (lista_alunos[qtalunos].cpfaluno > 999999999)
         {
            okcpf = 1;
            while (okcpf == 1)
            {
            printf ("O cpf eh invalido. Digite novamente: \n");
            scanf("%lld", lista_alunos[qtalunos].cpfaluno);
            }
        }
        else
        {
            printf("O cpf eh valido\n");
        }
    printf ("Gerando número de matrícula\n");
    lista_alunos[qtalunos].matriculaaluno = lista_alunos[qtalunos].matriculaaluno ++
    printf("Digite a data de completa de nascimento do aluno: \n");

}

  