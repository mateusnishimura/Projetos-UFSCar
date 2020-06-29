/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 03 - Raiz Quadrada
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

	Como a raiz quadrada não é uma operação trivial ao processador, que demanda um certo custo
	computacional, foram desenvolvidos métodos para a sua aproximação. O Método de Heron é
	uma antiga técnica para calcular a raiz quadrada de um valor q.
	
	A cada interação, o valor de k é atualizado, e quanto mais interações, mais o valor k se aproxima
	a raiz quadrada de q.
	Faça um programa que receba n números, e calcule a raiz quadrada de cada um, respectivamente.

	Exemplos de entrada e saída:

	Entrada 										Saída
	4 (n )
	2 8 4 25 (números para tirar a raiz)
													1.41 (raiz quadrada de 2)
													2.83 (raiz quadrada de 8)
													2.00 (raiz quadrada de 4)
													5.00 (raiz quadrada de 25)
*/

#include <stdio.h>

int main(){

	int quantnum, i;
	int num_resultados = 0;
	int outro_contador = 0;
	float num;
	float k = 1;
	float raiz = 0;

	scanf("%i", &quantnum);

	for (i = 0; i < quantnum; i++) {

		scanf("%f", &num);

		while (outro_contador != 10) {

			raiz = k;
			k = (raiz + num / raiz) / 2;

			outro_contador++;
		}

		printf("%.2f\n", k);

		raiz = 0;
		k = 1;
		outro_contador = 0;
	}

return(0);
}
