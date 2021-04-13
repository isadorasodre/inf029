#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>
#include <string.h>

//definição dos valores dos vetores
#define numprofessores 5
#define numalunos 5
#define numdisciplinas 5
#define alundisciplinas 40
#define datastodos 10

//definição de constantes para testes de char de sexo de professores e alunos
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
    data datanascimentoa;
} aluno;

typedef struct dados_professor {
    char nomeprof [100];
    char sexoprof [10];
    long long int cpfprof;
    int matriculaprof;
    data datanascimentop;
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

//declaração de vetores das structs
professor lista_professores [numprofessores];
aluno lista_alunos [numalunos];
disciplina lista_disciplinas [numdisciplinas];
alunodisciplina lista_matricula [alundisciplinas];
data lista_data[datastodos];
data datasaluno[numalunos];
data datasprofessores [numprofessores];

//declarações das funções que serão usadas ao longo do programa
void listaralunos ();
void listaalunosmasculino ();
void listaalunosfeminino ();
void alunos ();
void professores ();
void listarprofessores ();
int datacadastraaluno ();
int datacadastraprofessor ();

//variáveis globais
int qtalunos = 0, qtprofessores = 0, qtdisciplinas = 0, qtdisciplinasalunos = 0;

int main (){
    int op;
    do{
    printf ("*****BEM-VINDO AO PROJETO ESCOLA\n");
    printf ("ESCOLHA UMA OPÇÃO\n");
    printf ("1 - CADASTRO DE ALUNOS\n");
    printf ("2 - LISTAR ALUNOS\n");
    printf ("3 - LISTA ALUNOS DO SEXO MASCULINO\n");
    printf ("4 - LISTA ALUNOS DO SEXO FEMININO\n");
    printf ("5 - SAIR DO PROGRAMA \n");
    scanf ("%d", &op);
    switch (op)
        {
            case 1:
            {
                printf("CADASTRE OS ALUNOS: ");
                alunos ();
            }
            case 2:
            {
                printf("LISTA COMPLETA DE ALUNOS: ");
                listaralunos();
            }
            case 3:
            {
                printf("ALUNOS DO SEXO MASCULINO: ");
                listaalunosmasculino();
            }
            case 4:
            {
                printf("ALUNOS DO SEXO MASCULINO: ");
                listaalunosmasculino();
            }
        }   
    }while (op != 5);
    printf("Você escolheu sair do programa. Obrigado pela sua participação");
    return 0;
}

int datacadastraaluno ()
{
    int ok = 0;
    printf("Digite o dia em que você nasceu: \n");
    scanf("%d", &datasaluno[qtalunos].dia);
    
    if (datasaluno[numalunos].dia < 1 && datasaluno[numalunos].dia > 31)
    {
        printf("A dia é inválida; Digite novamente ");
        scanf("%d", &datasaluno[numalunos].dia);
    }
    else {
        printf("O dia é válido\n");
        ok = ok++;
    }
    printf("Digite o mes em que você nasceu: \n");
    scanf("%d", &datasaluno[qtalunos].mes);
    if (datasaluno[numalunos].mes < 1 && datasaluno[numalunos].mes > 12)
    {
        printf("A mes é inválida; Digite novamente ");
        scanf("%d", &datasaluno[numalunos].mes);
    }
    else 
    {
        printf("O mes é válido\n");
        ok = ok++;
    }
    printf("Digite o ano em que você nasceu: \n");
    scanf("%d", &datasaluno[numalunos].ano);
    if (datasaluno[numalunos].ano < 1 && datasaluno[numalunos].ano > 12)
    {
        printf("A mes é inválida; Digite novamente ");
        scanf("%d", &datasaluno[numalunos].ano);
    }
    else 
    {
        printf("O ano é válido\n");
    }
    return 0;
}

void alunos ()
{
    int datacadastraaluno (); //função para chamar data de nascimento 
    int oksexo = 0;
    int okcpf = 0;
    printf ("Vocês escolheu a lista de cadastro de alunos\n");
    printf ("Digite o nome do aluno\n");
    setbuf(stdin, NULL);
	fgets(lista_alunos[qtalunos].nomealuno, 100, stdin);
    printf ("Insira o sexo do aluno -  M ou F: \n");
    setbuf(stdin, NULL);
	fgets(lista_alunos[qtalunos].sexoaluno, 10, stdin);
    if (lista_alunos[qtalunos].sexoaluno != 'm' && lista_alunos[qtalunos].sexoaluno != 'M' && lista_alunos[qtalunos].sexoaluno != 'f' && lista_alunos[qtalunos].sexoaluno != 'F')
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
    printf ("Gerando número de matrícula do aluno...\n");
    lista_alunos[qtalunos].matriculaaluno = lista_alunos[qtalunos].matriculaaluno ++;
    printf ("Número de matrícula do aluno gerado!\n");
    printf("Digite a data de completa de nascimento do aluno: \n");
    datacadastraaluno ();
    printf("O cadastro foi computado com sucesso!\n");
    qtalunos ++;
}

void listaralunos ()
{
    int i;
    for (i = 0; i < qtalunos; i++)
	{
			printf("%s\n", lista_alunos[i].nomealuno);
			printf("%d/%d/%d\n", lista_alunos[i].datanascimentoa.dia, lista_alunos[i].datanascimentoa.mes, lista_alunos[i].datanascimentoa.ano);
			printf("%d\n", lista_alunos[i].matriculaaluno);
			printf("%lld\n", lista_alunos[i].cpfaluno);
			printf("%s\n", lista_alunos[i].sexoaluno);
			printf("\n");
    }


}

void listaalunosmasculino ()
{
    int i;
    for (i=0; i<qtalunos; i++)
    {
		if(lista_alunos[i].sexoaluno == 'M' && lista_alunos[i].sexoaluno == 'm')
		printf("%s\n", lista_alunos[i].nomealuno);
    }
}

void listaalunofeminino ()
{
    int i;
    for (i=0; i<qtalunos; i++)
    {
        if(lista_alunos[i].sexoaluno == 'F' && lista_alunos[i].sexoaluno == 'f')
        printf("%s\n", lista_alunos[i].nomealuno);
    }
}

int datacadastraprofessor ()
{
    int ok = 0;
    printf("Digite o dia em que você nasceu: \n");
    scanf("%d", &datasprofessores[qtprofessores].dia);
    
    if (datasprofessores[numprofessores].dia < 1 && datasaluno[numprofessores].dia > 31)
    {
        printf("A dia é inválida; Digite novamente ");
        scanf("%d", &datasprofessores[numprofessores].dia);
    }
    else {
        printf("O dia é válido\n");
        ok = ok++;
    }
    printf("Digite o mes em que você nasceu: \n");
    scanf("%d", &datasaluno[qtalunos].mes);
    if (datasaluno[numalunos].mes < 1 && datasaluno[numalunos].mes > 12)
    {
        printf("A mes é inválida; Digite novamente ");
        scanf("%d", &datasaluno[numalunos].mes);
    }
    else 
    {
        printf("O mes é válido\n");
        ok = ok++;
    }
    printf("Digite o ano em que você nasceu: \n");
    scanf("%d", &datasaluno[numalunos].ano);
    if (datasaluno[numalunos].ano < 1 && datasaluno[numalunos].ano > 12)
    {
        printf("A mes é inválida; Digite novamente ");
        scanf("%d", &datasaluno[numalunos].ano);
    }
    else 
    {
        printf("O ano é válido\n");
    }
    return 0;
}



void professores ()
{
    int listarprofessores (); //função para chamar data de nascimento 
    int oksexo = 0;
    int okcpf = 0;
    printf ("Vocês escolheu a lista de cadastro de professores\n");
    printf ("Digite o nome do professor\n");
    setbuf(stdin, NULL);
	fgets(lista_professores[qtprofessores].nomeprof, 100, stdin);
    printf ("Insira o sexo do professor -  M ou F: \n");
    setbuf(stdin, NULL);
	fgets(lista_professores[qtprofessores].sexoprof, 10, stdin);
    if (lista_professores[qtprofessores].sexoprof != 'm' && lista_professores[qtprofessores].sexoprof != 'M' && lista_professores[qtprofessores].sexoprof != 'f' && lista_professores[qtprofessores].sexoprof != 'F')
        {
            oksexo = 1;
            while (oksexo == 1)
            {
            printf ("O sexo é inválido. Digite novamente  M OU F: \n");
            fgets(lista_professores[qtprofessores].sexoprof, 10, stdin);
            }
        }
    else
        {
            printf("O sexo é válido\n ");
        }
    printf("Digite o cpf do professor: ");
    scanf("%lld", &lista_professores[qtprofessores].cpfprof);
        if (lista_professores[qtprofessores].cpfprof > 999999999)
         {
            okcpf = 1;
            while (okcpf == 1)
            {
            printf ("O cpf eh invalido. Digite novamente: \n");
            scanf("%lld", lista_professores[qtprofessores].cpfprof);
            }
        }
        else
        {
            printf("O cpf eh valido\n");
        }
    printf ("Gerando número de matrícula do professsor: \n");
    lista_professores[qtprofessores].matriculaprof = lista_professores[qtprofessores].matriculaprof ++;
    printf ("Número de matrícula do professor gerado!\n");
    printf("Digite a data de completa de nascimento do professor: \n");
    datacadastraprofessor ();
    printf("O cadastro foi computado com sucesso!\n");
    qtprofessores ++;
}