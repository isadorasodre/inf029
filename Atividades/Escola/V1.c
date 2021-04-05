#include <stdio.h>
#include <stlib.h>
#include <string.h>
#define max_alunos = 200
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
        printf("Digite o nome do aluno: \n");
        fgets (nomealuno, sizeof(nomealuno), stdin);
        printf ("Digite o sexo do aluno: \n");
        fgets (sexoaluno, sizeof(sexoaluno), stdin);
        if (sexoaluno != m || sexoaluno != M)
        
    }