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
    int dia_numero;
    int mes_numero;
    int ano_numero;
    int posicaodia = 0; //guarda a posição da data
    int i, j = 0;
    int contador = 0;
    int tam1, tam2, tam3 = 0;
    for (i = 0, j =0; data != '\0'; i ++, j++)
    {
        dia_isolado[j]=data[i];
    }
    dia_isolado[j+1]='\0';
    tam1 = strlen(dia_isolado);
    for (i = tam1 +1, j =0; data != '\0'; i++, j++)
    {
        mes_isolado[j]=data[i];
    }
    mes_isolado[j+1]='\0';
    tam2 = strlen(mes_isolado);
    tam3 = tam2 + tam1;
    for (i=tam3+2; data != '\0'; i++, j++)
    {
        ano_isolado[j] = data[i];
    }
    ano_isolado[j+1] = '\0';

    dia_numero = atoi (dia_isolado);
    mes_numero = atoi (mes_isolado);
    ano_numero = atoi (ano_isolado);

    if (dia_numero < 1 || dia > 31)


}
   
//printf("%s\n", data)
//if (datavalida)
//return 1;
//else
//return 0;
