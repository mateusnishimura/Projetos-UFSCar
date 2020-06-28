/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 03 - Exercício 03 - Tabela Verdade
 * 
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
	Mestofelio esta estudando calculo proposicional em Logica Matematica com o professor Jose.
	Cansado de ter que perguntar para os monitores se suas equival^encias logicas est~ao corretas,
	ele decidiu implementar inicialmente um interpretador de tabela verdade (das operac~oes e, ou,
	implicac~ao e bicondicional).
	Faca um programa que dado duas entradas (V para verdadeiro e F para falso) e uma operac~ao
	booleana, imprima na tela o resultado.
	Ser~ao utilizadas as seguintes letras para representar os operadores:
	E Operac~ao e;
	O Operac~ao ou;
	I Operac~ao implicac~ao;
	B Operac~ao bicondicional.
*/

#define VERDADEIRO "V\n"
#define FALSO "F\n"
#define INVALIDO "entrada inválida!\n"
#include <stdio.h>

int main() {


	char primeira_entrada, segunda_entrada, operacao, resultado;
	scanf("%c\n%c\n%c", &primeira_entrada,&segunda_entrada, &operacao);

	if ((primeira_entrada == 'V' || primeira_entrada== 'F') && (segunda_entrada == 'V' || segunda_entrada == 'F') &&
				(operacao == 'E' || operacao == 'O' || operacao == 'I' || operacao == 'B')) {


		/* Operaçoes:
		- E: e 
		- O: ou
		- I: condicional
		- B: bicondicional		
		*/

		if (operacao == 'E') {

		if (primeira_entrada == 'V') {

				if (segunda_entrada == 'V')
					printf(VERDADEIRO);

				if (segunda_entrada == 'F')
					printf(FALSO);
		}

		if (primeira_entrada == 'F')
			printf(FALSO);

		}


		if (operacao == 'O'){

		if (primeira_entrada == 'V') 
			printf(VERDADEIRO);

		if (primeira_entrada == 'F'){

			if (segunda_entrada == 'V')
				printf(VERDADEIRO);

			if (segunda_entrada == 'F')
				printf(FALSO);
		}
		}


		if (operacao == 'I') {

		if (primeira_entrada == 'V') {

			if (segunda_entrada == 'V')
				printf(VERDADEIRO);

			if (segunda_entrada == 'F')
				printf(FALSO);
		}

		if (primeira_entrada == 'F')
			printf(VERDADEIRO);
		}





		if (operacao == 'B') {

		if (primeira_entrada == 'V') {

				if (segunda_entrada == 'V')
					printf(VERDADEIRO);

				if (segunda_entrada == 'F')
					printf(FALSO);
		}

		if (primeira_entrada == 'F') {

				if (segunda_entrada == 'V')
					printf(FALSO);

				if (segunda_entrada == 'F')
					printf(VERDADEIRO);
		}
		}


	}

	else {
		printf(INVALIDO);
	}

	




return(0);
}
