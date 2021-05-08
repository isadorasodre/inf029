#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
//variável universal da tabela
char tabela[3][3];

//funções do jogo
int valida_caracter (char letra);
void valida_tabela();
int valida_coordenada (int a, int b);
int ganha_horizontal ();
int ganha_vertical ();
int ganha_diagonal ();
int vazio ()

int main ()
{
    return 0;
}


void valida_tabela ()
{
    int i, j;
    for (i =0; i <3; i++)
    {
        for (j=0; j <3; j++)
        {
            tabela[i][j] = 'c'
        }
    }
}

int valida_caracter (char letra)
{
    if (char letra == 'x' || char letra '0' )
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int valida_coordenada (int a, int b)
{
    if (a >= 9 && a <3)
    {
        if (b>= 0 && b <3)
        return 1;
    }
    else 
    {
        return 0;
    }
}

int vazio ();
if (tabela[a][b] != 'x' || tabela[a][b]  != '0')
{
    return 1;

}
else
{
    return 0;
}

int ganha_vertical ()
{
    int i, j;
    int cont=1;
    for (i = 0; i <3; i ++) //varre linhas
    {
        for (j=0; j <2; j++) // varre colunas
        {
            if (valida_tabela(tabela[i][j]) && tabela[i][j] == tabela[i][j+1])
            {
                cont++;
            }
        }
            if (cont == 3)
            {
                return 1;
            }
            cont = 1;
    }
    return 0;
}
int ganha_horizontal ()
{
    int i, j;
    cont = 1;
    for (i =0; i <3; i++)
    {
        for (j=0; j<2; j++)
        {
            if(valida_tabela(tabela[j][i]) && tabela[j][i] == tabela[j+1][i])
            {
                cont++;
            }
        }
        if (cont == 3)
        {
            return 1;
        }
        cont = 1;
    }
        return 0;
}
int ganha_diagonal ()
{
    int i, j;
    cont = 
}
int vazio ()









}