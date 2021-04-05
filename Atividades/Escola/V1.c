#include <stdio.h>
#include <stlib.h>
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
} aluno
aluno cadalunos (max_alunos);
void cadastroaluno();
void cadastroprofi();
void cadastrodisciplina();
void listaalunos();
void removealunos();
int main (void)
{
    int opçãocadastro; 
    printf("********** BEM-VINDO AO PROJETO ESCOLA - LABORATÓRIO DE PROGRAMACAO **********\n");
    printf("ESCOLHA O QUE DESEJA FAZER\n");
    printf //aqui preciso colocar a lista com todas as opções
    scanf("%d", &opçãocadastro);
    switch (opção)
    {
        case 1:
        {
            cadastroaluno ();
        }

    }
    
}
void cadastroaluno (){
        char nomealuno [200];
        char sexoaluno [5];
        int diaaluno, mesaluno, anoaluno, matriculaaluno, consta;
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
            oksexo = 1
            while (oksexo == 1)
            {
            prinft("O sexo é inválido. Digite novamente  M OU F: \n");
            fgets (sexoaluno, sizeof(sexoaluno), stdin);
            }
        }
        else
        {
            printf("O sexo é válido\n ");
        }
        printf ("Digite o cpf: \n");
        scanf("%lld", &cpfaluno);
        printf("Digite o dia do aniversário: ");
        scanf ("%d", &diaaluno);

        
    }