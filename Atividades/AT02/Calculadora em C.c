#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int n1, n2, opção;
    float result;
        for (;;)
        {
            printf("Digite o primeiro valor: \n");
            scanf ("%d", &n1);
            printf("Digite um segundo valor: \n");
            scanf ("%d", &n2);
            printf("ESCOLHA UMA DAS OPÇÕES: 1 - SOMAR / 2 - SUBTRAIR / 3 - MULTIPLICAR / 4 - DIVIDIR / 5 - SAIR\n");
            scanf("%d",& opção);
            switch (opção)
            {
                 case 1: 
                 {
                     result = n1 + n2;
                     printf("A soma dos números que você digitou é %f\n", result);
                     break;
                 }   
                case  2: 
                {
                    result = n1 - n2;
                    printf("A subtração dos dois números é %f\n", result);
                    break;
                }
                case 3:
                {
                    result = n1 + n2;
                    printf("A multiplicação desses números é %f\n", result);
                    break;
                }
                case 4:
                {
                    if (n2 ==0)
                    {
                        printf("Não é possível dividir por 0\n");
                    }
                    else{
                    result = n1 / n2;
                    printf("A divisão desses dois números é %f\n", result);
                    }
                    break;
                }
                default: print ("Opção inválida\n");
            }
            if (opção == 5)
            break;
        
}         