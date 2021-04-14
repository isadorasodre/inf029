#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

//definição dos valores dos vetores
#define numprofessores 5
#define numalunos 5
#define numdisciplinas 5
#define alundisciplinas 40
#define datastodos 10

//declaração de estruturas - data, professor, aluno, disciplina e aluno por disciplina
typedef struct dados_dada{
    int dia;
    int mes; 
    int ano;
} data;

typedef struct dados_aluno {
    char nomealuno [100];
    char sexoaluno;
    long long int cpfaluno;
    int matriculaaluno;
    data datanascimentoa;
} aluno;

typedef struct dados_professor {
    char nomeprof [100];
    char sexoprof;
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
void listarnomealunos ();
void listaalunosmasculino ();
void listaalunosfeminino ();
void alunos ();
void professores ();
void listarprofessores ();
void listaprofmasculino ();
void listaproffeminino ();
void listarnomeprofessores ();
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
    printf ("5 - LISTAR ALUNOS EM ORDEM ALFABÉTICA \n");
    printf ("6 - CADASTRO DE PROFESSORES \n");
    printf ("7 - LISTAR PROFESSORES \n");
    printf ("8 - SAIR DO PROGRAMA \n");
    scanf ("%d", &op);
    switch (op)
        {
            case 1:
            {
                printf("CADASTRE OS ALUNOS: ");
                alunos ();
                qtalunos++;
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
            case 5:
            {
                printf("ALUNOS POR ORDEM ALFABÉTICA \n");
                listarnomealunos();
            }
            case 6:
            {
                printf("CADASTRO DE PROFESSORES ");
                professores ();
                qtprofessores++;
            }
            case 7:
            {
                printf("LISTAR PROFESSORES: \n");
                listarprofessores ();
            }
        }   
    }while (op != 8);
    printf("Você escolheu sair do programa. Obrigado pela sua participação");
    return 0;
}

//PARTE ALUNOS 
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
    int okcpf = 0;
    printf ("Vocês escolheu a lista de cadastro de alunos\n");
    printf ("Digite o nome do aluno\n");
    setbuf(stdin, NULL);
	fgets(lista_alunos[qtalunos].nomealuno, 100, stdin);
    printf ("Insira o sexo do aluno -  M ou F: \n");
    scanf (" %c", &lista_alunos[qtalunos].sexoaluno);
    lista_alunos[qtalunos].sexoaluno == toupper (lista_alunos[qtalunos].sexoaluno);
    if (lista_alunos[qtalunos].sexoaluno != 'M' &&  lista_alunos[qtalunos].sexoaluno != 'F')
    {
            printf ("O sexo é inválido. Digite novamente M OU F: \n");
            scanf (" %c", &lista_alunos[qtalunos].sexoaluno);
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

void listarnomealunos ()
{
    int i, j, k,r;
    char aux [100];
    for (i = 0; i <= qtalunos; i++)
    {
        for (j = i + 1; j <= qtalunos; j++ )
        {
        k = strcmp (lista_alunos [i].nomealuno, lista_alunos [j]. nomealuno);
        if (k > 0)
        {
            strcpy (aux, lista_alunos[i].nomealuno);
            strcpy (lista_alunos[i].nomealuno, lista_alunos [j]. nomealuno);
            strcpy (lista_alunos [j].nomealuno, aux); //diante da comparação, existe uma função cópia para colocar um nome em seguida do outro (o nome 'maior' de acordo com a ordem alfabética), para em seguida colocar em um print na ordem correta. 
        }
        }
    }
    for (r = 0; r <=qtalunos; r++)
    {
        printf("%s\n", lista_alunos[r].nomealuno);
    }
}

//PARTE PROFESSORES

int datacadastraprofessor ()
{
    int ok = 0;
    printf("Digite o dia em que você nasceu: \n");
    scanf("%d", &datasprofessores[qtprofessores].dia);
    
    if (datasprofessores[numprofessores].dia < 1 && datasprofessores[numprofessores].dia > 31)
    {
        printf("A dia é inválida; Digite novamente ");
        scanf("%d", &datasprofessores[numprofessores].dia);
    }
    else {
        printf("O dia é válido\n");
        ok = ok++;
    }
    printf("Digite o mes em que você nasceu: \n");
    scanf("%d", &datasprofessores[qtprofessores].mes);
    if (datasprofessores[numprofessores].mes < 1 && datasprofessores[numprofessores].mes > 12)
    {
        printf("A mes é inválida; Digite novamente ");
        scanf("%d", &datasprofessores[numprofessores].mes);
    }
    else 
    {
        printf("O mes é válido\n");
        ok = ok++;
    }
    printf("Digite o ano em que você nasceu: \n");
    scanf("%d", &datasprofessores[numprofessores].ano);
    if (datasprofessores[numprofessores].ano < 1 && datasprofessores[numprofessores].ano > 12)
    {
        printf("A mes é inválida; Digite novamente ");
        scanf("%d", &datasprofessores[numprofessores].ano);
    }
    else 
    {
        printf("O ano é válido\n");
    }
    return 0;
}

void professores ()
{
    int datacadastraprofessor (); //função para chamar data de nascimento 
    int oksexo = 0;
    int okcpf = 0;
    printf ("Vocês escolheu a lista de cadastro de professores\n");
    printf ("Digite o nome do professor\n");
    setbuf(stdin, NULL);
	fgets(lista_professores[qtprofessores].nomeprof, 100, stdin);
    printf ("Insira o sexo do professor -  M ou F: \n");
    fflush(stdin);
    scanf ("%c", &lista_professores[qtprofessores].sexoprof);
    if (lista_professores[qtprofessores].sexoprof != 'm' && lista_professores[qtprofessores].sexoprof != 'M' && lista_professores[qtprofessores].sexoprof != 'f' && lista_professores[qtprofessores].sexoprof != 'F')
        {
            oksexo = 1;
            while (oksexo == 1)
            {
            printf ("O sexo é inválido. Digite novamente  M OU F: \n");
            scanf (" %c", &lista_professores[qtprofessores].sexoprof);
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
}


void listarprofessores ()
{
    int i;
    for (i = 0; i < qtprofessores; i++)
	{
			printf("%s\n", lista_professores[i].nomeprof);
			printf("%d/%d/%d\n", lista_professores[i].datanascimentop.dia, lista_professores[i].datanascimentop.mes, lista_professores[i].datanascimentop.ano);
			printf("%d\n", lista_professores[i].matriculaprof);
			printf("%lld\n", lista_professores[i].cpfprof);
			printf("%s\n", lista_professores[i].sexoprof);
			printf("\n");
    }

}

void listaprofmasculino ()
{
    int i;
    for (i=0; i<qtprofessores; i++)
    {
		if(lista_professores[i].sexoprof == 'M' && lista_professores[i].sexoprof == 'm')
		printf("%s\n", lista_professores[i].nomeprof);
    }
}

void listaproffeminino ()
{
    int i;
    for (i=0; i<qtprofessores; i++)
    {
        if(lista_professores[i].sexoprof == 'F' && lista_professores[i].sexoprof == 'f')
        printf("%s\n", lista_professores[i].sexoprof);
    }
}

void listarnomeprofessores ()
{
    int i, j, k,r;
    char aux [100];
    for (i = 0; i <= qtprofessores; i++)
    {
        for (j = i + 1; j <= qtprofessores; j++ )
        {
        k = strcmp (lista_professores [i].nomeprof, lista_professores [j]. nomeprof);
        if (k > 0)
        {
            strcpy (aux, lista_professores[i].nomeprof);
            strcpy (lista_professores[i].nomeprof, lista_professores [j]. nomeprof);
            strcpy (lista_professores [j].nomeprof, aux); //diante da comparação, existe uma função cópia para colocar um nome em seguida do outro (o nome 'maior' de acordo com a ordem alfabética), para em seguida colocar em um print na ordem correta. 
        }
        }
    }
    for (r = 0; r <=qtprofessores; r++)
    {
        printf("%s\n", lista_professores[r].nomeprof);
    }
}