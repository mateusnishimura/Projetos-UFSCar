/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 02 - Números Inteiros Primos
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
  Enunciado do Problema:

  A denição mais comum de núumeros primos que aprendemos é que um núumero é primo se ele
  for divisível apenas por 1 e por ele mesmo. Contudo, essa é a denição de um núumero natural
  primo. A denição de um núumero inteiro primo é que p é primo se houver somente quatro
  divisores distintos tal que p e Z : +-1 e +-p. Exemplos: divisores de 3 = -3, -1, 1 e 3; divisores
  de 2 = -2, -1, 1 e 2; divisores de -5 = -5, -1, 1 e 5.
  Dada a denição de que um núumero inteiro é primo se e somente se possuir exatos quatro
  divisores inteiros, faça um programa que receba um intervalo [A;B) (fechado em A e aberto
  em B) e imprima todos os núumeros primos nesse intervalo.
  Se o intervalo for inválido, imprima a mensagem pré-denida\intervalo inválido!" e solicite
  novamente um intervalo. Se não houver primos no intervalo, imprima \não há primos no
  intervalo!".

  Exemplos de entrada e saída:

  Entrada Saída
  0 0
          intervalo inválido!
  -2 6
          -2, -1, 1, 2 (divisores de -2)
          -2, -1, 1, 2 (divisores de 2)
          -3, -1, 1, 3 (divisores de 3)
          -5, -1, 1, 5 (divisores de 5)
*/


#define INVALIDO "intervalo inválido!\n"
#define NAO_HA   "não há primos no intervalo!\n"
#include <stdio.h>
#include <math.h>

int main() {

    int inicio_intervalo, fim_intervalo;
		int primos = 0;
		int	nao_ha_primos = 1;
    int auxiliar = 1;

    scanf("%i %i", &inicio_intervalo, &fim_intervalo);

    // Verificador
    while (inicio_intervalo == fim_intervalo) {

      printf(INVALIDO);

      scanf("%i %i", &inicio_intervalo, &fim_intervalo);

    }


    for (; inicio_intervalo <= fim_intervalo-1; inicio_intervalo++) {

      do {

        if (abs(inicio_intervalo) % auxiliar == 0) {

          primos++;

        }

      auxiliar++;
      
      }

      while (auxiliar <= abs(inicio_intervalo));

      if (primos == 2) {

        printf("-%i, -1, 1, %i\n", abs(inicio_intervalo), abs(inicio_intervalo));
        nao_ha_primos = 0;

      }

      primos = 0;
      auxiliar = 1;

    }

 		if (nao_ha_primos == 1) {

 		 printf(NAO_HA);

    }

return(0);
}
