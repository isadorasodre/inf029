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
#include <stdint.h>
#include <string.h>
#include <ctype.h>

//declaração das funções das questões - professor, não consegui fazer as quest 2 e 4. 
int q1 (char *data);
int q3 (char *texto, char c, int isCaseSensitive);
int q5(int num);
int q6(int numerobase, int numerobusca);

//função da primeira questão 
int q1(char *data)
{
    int datavalida = 1;
    char dia_isolado [3];
    char mes_isolado [3];
    char ano_isolado [5];
    int dia_numero;
    int mes_numero;
    int ano_numero;
    int i, j = 0;
    int contador = 0;
    int tam1, tam2, tam3 = 0;
    for (i = 0, j =0; data[i] != '/'; i ++, j++)
    {
        dia_isolado[j]=data[i];
        printf("%s", dia_isolado);
    }
    dia_isolado[j+1]='\0';
    tam1 = strlen(dia_isolado);
    for (i = tam1 +1, j =0; data[i] != '/'; i++, j++)
    {
        mes_isolado[j]=data[i];
    }
    mes_isolado[j+1]='\0';
    tam2 = strlen(mes_isolado);
    tam3 = tam2 + tam1;
    for (i=tam3+2; data[i] != '/'; i++, j++)
    {
        ano_isolado[j] = data[i];
    }
    ano_isolado[j+1] = '\0';

    dia_numero = atoi (dia_isolado);
    mes_numero = atoi (mes_isolado);
    ano_numero = atoi (ano_isolado);

    //validando datas
    if (ano_numero >= 1900 && ano_numero <= 2021)
    {
        if (mes_numero == 1 || mes_numero == 3 || mes_numero == 5 || mes_numero == 7 || mes_numero == 8 || mes_numero == 10 || mes_numero == 12)
        {
            if (dia_numero >=1 && dia_numero <= 31)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if (mes_numero == 4 || mes_numero == 6 || mes_numero == 9 || mes_numero == 11)
        {
            if (dia_numero >=1 && dia_numero <= 30)
            {
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        if (mes_numero == 2)
        {
            if (ano_numero%4 == 0 || ano_numero%100 == 0 || ano_numero%400 ==0)
            {
                if (dia_numero >=1 && dia_numero <= 29)
                {
                    return 1;
                }
                else 
                {
                return 0;
                }
            }
            if (dia_numero >=1 && dia_numero <= 28)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

//função da questão 3
int q3(char *texto, char c, int isCaseSensitive)
{
    int qtdOcorrencias = -1;
    int i, j = 0;
    if (isCaseSensitive!=1)
    {
        for ( i = 0; texto[i] != '\0'; i++)
        {
            if (texto [i] == c)
            {
            qtdOcorrencias++;
            }
        }
    }
    else
    {
        for (j = 0; texto[j] != '\0'; j++)
        {
            if (tolower(texto[j])==(tolower(c)))
            {
            qtdOcorrencias++;
            }
        }
    }
    return qtdOcorrencias;
}

//função da questão 5
int q5(int num)
{
    int  inverso, aux;
    while (num > 0)
    {
        aux = num%10;
        inverso = inverso*10 + aux;
        num = 0.1*num;
    }
    num = inverso;
    return num;
}

//função da questão 6
int q6(int numerobase, int numerobusca)
{
    int qtdOcorrencias, r; 
    while (numerobase == 0)
    {
        r=numerobase%10;
        if(r==numerobusca)
        {
            qtdOcorrencias++;
        }
        numerobase=0.1*numerobase;
    }
    return qtdOcorrencias;
}