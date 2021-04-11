#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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

int cabecalhoprojeto;
int cadastraralunos (cadastroaluno alunos [], int qtdalunos);

int main (){
    int op;
    int qtdalunos = 0;
    cadastroaluno alunos [4];
    cabecalhoprojeto;
    return 0;
}