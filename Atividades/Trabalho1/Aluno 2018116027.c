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
int q1 (char data[12]);

int main ()
{
    q1 (char data [12]);
    return 0;
}

//função da primeira questão 
int q1(char data [12])
{
    int datavalida = 1;
    printf ("Escreva uma data completa neste modelo: dd/mm")
    //quebrar a string data em strings sDia, sMes, sAno

    //converter sDia, sMes e sAno em inteiros (ex: atoi)

    //criar as variáveis iDia, iMes, iAno

    //printf("%s\n", data);

    if (datavalida)
        return 1;
    else
        return 0;
}