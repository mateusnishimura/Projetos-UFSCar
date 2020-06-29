/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 03 - Mercado de Ações
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

	Você está fazendo estágio em mais uma empresa, mas agora na área do mercado de ações.
	O DEPAR { DEPartamento de Análise de Riscos possui um projeto para vender as ações que
	tenham apresentado um alto índice de queda.

	ENTRADA
	Cada caso de teste é composto por duas linhas. A primeira consiste de um número inteiro
	n (0 < n <= 1000) que corresponde ao número de registros disponíveis de determinada ação.
	A segunda linha contém números inteiros v (0 < v <= 2^31), que representam os valores de
	determinada ação em cada período registrado.

	SAÍDA
	Seu programa deve imprimir uma única linha de saída, contendo a maior queda registrada no
	período, caso não haja, deve exibir o valor 0.

	Exemplo de entrada e saída:
	Entrada 			Saída
	6 (n )
	3 2 4 2 1 5 (v)
						-3 (maior queda registrada)	
*/

#include <stdio.h>

int main()
{

	int tamanho, i, k, j;
	long double vetor[10000], aux = 0, sub;

	scanf("%i", &tamanho);

	//ENTRADA COM OS VALORES

	for (i = 0; i < tamanho; i++) {

		scanf("%llf", &vetor[i]);
	}

	//VERIFICAÇÃO DE QUAL É A MAIOR QUEDA

	for (j = 0; j < tamanho; j++) {

		for (k = j + 1; k < tamanho; k++) {

			sub = vetor[k] - vetor[j];
		
			if (sub < aux)
				aux = sub;
		}
	}

	printf("%0.llf", aux);

	return (0);
}
