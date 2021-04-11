#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_alunos = 200
char sexo1[4] = "M";
char sexo2[4] = "m";
char sexo3[4] = "F";
char sexo4[4] = "f";
typedef struct {
    char nomealuno [200];
    char sexoaluno [5];
    int diaaluno, mesaluno, anoaluno, matriculaaluno, consta;
    long long int cpfaluno;
} Aluno;
Aluno cadalunos (max_alunos)
int main (void)
{
    int opcao; 
    do  {

    printf("********** BEM-VINDO AO PROJETO ESCOLA - LABORATÓRIO DE PROGRAMACAO **********\n");
    printf("ESCOLHA O QUE DESEJA FAZER\n");
    printf("\n        1-  Cadastrar alunos  *\n");
	printf("\n        2-  Criar lista de alunos *\n");
	printf("\n        3-  Ver a quantidade de alunos  cadastrados *\n");
	printf("\n        4-  Excluir alunos da disciplina *\n");
	printf("\n        5-  Mostrar lisa de alunos *\n");
	printf("\n        6-  Mostrar lista de alunos do sexo masculino*\n");
	printf("\n        7-  Mostrar lista de alunos do sexo feminino *\n");
    printf("\n        8-  Motrar lista de alunos por ordem alfabética*\n");
    printf("\n        9-  Listar alunos por ordem de nascimento*\n");
    printf("\n        10- Criar lista de disciplinas*\n");
	printf("\n        12- Cadastrar disciplina*\n");
	printf("\n        13- Listar dados da disciplinas sem alunos *\n");
    printf("\n        14- Listar uma disciplina *\n");
    printf("\n        15- Criar lista de professores *\n");
	printf("\n        16- Cadastrar professores  *\n");
	printf("\n        17- Mostrar lista de professores *\n");
	printf("\n        18- Mostrar lista de professores do sexo masculino*\n");
    printf("\n        19- Mostrar lista de professores do sexo feminino *\n");
    printf("\n        20- Mostrar lista de professores por ordem alfabetica *\n");
	printf("\n        21- Mostrar lista de professores por ordem de nascimento*\n");
    printf("\n        22- Mostrar professores aniversariantes do mes soicitiado *\n");
	printf("\n        23- Excluir Disciplina*\n");
	printf("\n        24- Excluir professor  *\n");
	printf("\n        25- Atualizar dado de alunos (as)  *\n");
    printf("\n        26- Atualizar dados das  disciplinas*\n");
	printf("\n        27- Atualizar dados dos professores*\n");
    printf("\n        28- Ver quantidades de professores *\n");	
    printf("\n        29- SAIR *\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
        case 1:
        {
            cadastroaluno ();
        }

    }
        }while(opcao != 29); 
}
void cadastroaluno (){
        char nomealuno [200];
        char sexoaluno [5];
        int diaaluno, mesaluno, anoaluno, matriculaaluno;
        long long int cpfaluno;
        int okdia = 0;
        int oksexo = 0;
        int okmes = 0;
        int okano = 0;
        int okcpf = 0;
        printf("Digite o nome do aluno: \n");
        fgets (nomealuno, sizeof(nomealuno), stdin);
        printf ("Digite o sexo do aluno (M OU F): \n");
        fgets (sexoaluno, sizeof(sexoaluno), stdin);
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
        printf ("Digite o cpf: \n");
        scanf("%lld", &cpfaluno);
        if (cpfaluno > 999999999)
         {
            okcpf = 1;
            while (okcpf == 1)
            {
            prinft("O cpf eh invalido. Digite novamente: \n");
            scanf("%lld", &cpfaluno);
            }
        }
        else
        {
            printf("O cpf eh valido\n");
        }
        printf("Digite o dia do nascimento: ");
        scanf ("%d", &diaaluno);
        if (diaaluno < 1 && diaaluno > 31);
        {
            okdia = 1;
            while (okdia == 1)
            {
            prinft("O dia do nascimento é invalido. Digite novamente: \n");
            scanf ("%d", &diaaluno);
            }

        }
        if (diaaluno > 1 && diaaluno <= 31)
        {
            prinft("A dia de nascimento eh valido\n");
        }
        
        printf("Digite o mês de nascimento: ");
        scanf ("%d", &mesaluno);
        if (mesaluno < 1 && mesaluno > 12);
        {
            okmes = 1;
            while (okmes == 1)
            {
            prinft("O mes do nascimento eh invalido. Digite novamente: \n");
            scanf ("%d", &mesaluno);
            }

        }
        if (/* condition */)
        {
            prinft("A mes de nascimento é válido\n");
        }
        printf("Digite o ano de nascimento: ");
        scanf ("%d", &anoaluno);
        if (mesaluno < 1 && mesaluno > 12);
        {
            okmes = 1;
            while (okmes == 1)
            {
            prinft("O mes do nascimento eh invalido. Digite novamente: \n");
            scanf ("%d", &mesaluno);
            }
        }
        else 
        {
            prinft("A mes de nascimento é válido\n");
        }
        print ("Gerando número de matricula de aluno\n");
        matriculaaluno = matriculaaluno ++;
    }