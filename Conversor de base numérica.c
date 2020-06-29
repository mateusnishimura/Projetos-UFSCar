/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 04 - Conversor de Bases Numéricas
 *
 *  Instruções
 *  ----------
 *
 *  Este arquivo contém o código que auxiliará no desenvolvimento do
 *  exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== *
 *  Dados do aluno:
 *
 *  RA:
 *  Nome:Mateus Grota Nishimura Ferro
 *
 * ================================================================== */

/*
    Enunciado do problema:

    Após a prova da professora Yeda, você, programador serelepe, quer implementar um conversor
    de bases numéricas, a m de conferir se suas conversões estavam corretas.
    O programa terá as seguintes opções:
    (0) sair do programa;
    (1) conversão binária para decimal: recebe o número em binário na ordem LSB, com os dígitos
    separados por espaço e terminado por -1;
    (2) conversão de decimal para binário: recebe o número decimal a ser convertido para binário
    na ordem LSB.

    Exemplos de entrada e saída:

    Entrada                     Saída
    1 (binário-decimal)
    0 1 1 0 1 -1
                                22 (número 10110)
    2 (decimal-binário)
    42
                                010101 (número 42)
    0 (sair do programa)
*/

#include <stdio.h>
#include <math.h>
#define OP_INVALIDA "op��o inv�lida!\n"
int main()
{

    int opcao, num, i = 0, convb = 0, pot = 0, resto = 0;

    do {

        scanf("%i", &opcao);

        if (opcao > 2)
            printf(OP_INVALIDA);

        if (opcao < 0)
            printf(OP_INVALIDA);

        if (opcao == 1) {

            for (; num != -1; pot++) {

                scanf("%i", &num);

                if (num == -1)
                    break;

                convb = convb + (num * pow(2, pot));
            }

            printf("%i\n", convb);

            convb = 0;
            pot = 0;
            num = 0;
        }

        if (opcao == 2) {

            scanf("%i", &num);

            if (num != 1 && num != 0) {

                do {

                    resto = num % 2;

                    num = num / 2;

                    printf("%i", resto);

                    if (num == 0 || num == 1)
                        printf("%i", num);

                } while (num != 1 && num != 0);
            }
            
            else {

                if (num == 1)
                    printf("1");
                if (num == 0)
                    printf("0");
            }

            printf("\n");
        }

    } while (opcao != 0);

    return (0);
}
