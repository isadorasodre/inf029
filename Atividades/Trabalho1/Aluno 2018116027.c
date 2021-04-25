// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Dados do Aluno -----
//  Nome: Isadora de Sodré Chaves   
//  email: isodrechaves@gmail.com   
//  Matrícula: 2018116027       
//  Semestre: (Assemestrealizada)

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

//declaração das funções das questões 
int q1 (char data[11]);
char data [11];

int main ()
{
    printf ("Escreva uma data completa neste modelo: dd/mm/aaaa\n");
    setbuf(stdin, NULL);
	fgets(data, 11, stdin);
    int q1 (char data[11]);
    return 0;
}

//função da primeira questão 
int q1(char data [11])
{
    int datavalida = 1;
    char dia_isolado [3];
    char mes_isolado [3];
    char ano_isolado [5];
    int posicaodia = 0; //guarda a posição da data
    int i, j = 0;
    int contador = 0;
    int tam1, tam2, tam3 = 0;
    for (i = 0, j =0; data != '\0'; i ++,)
    {

        }
    }
}
    //quebrar a string data em strings sDia, sMes, sAno

    //converter sDia, sMes e sAno em inteiros (ex: atoi)

    //criar as variáveis iDia, iMes, iAno

printf("%s\n", data);
if (datavalida)
return 1;
else
return 0;
