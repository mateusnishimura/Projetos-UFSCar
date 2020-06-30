/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 03 - Sudoku
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

	O Sudoku, um jogo criado em 1979 pelo arquiteto e designer de Puzzles Howard Garns, estimula
	o raciocínio lógico. Normalmente, o Sudoku é composto por uma grade 9 x 9 constituída de
	sub-grades de 3 x 3, denominadas de "regiões". Algumas células já contêm números, chamados
	de "dados". A nalidade do jogo é preencher as células vazias de forma que cada coluna, linha
	e região contenham os números de 1 à 9 apenas uma vez.
	Agora que você está se tornando um programador experiente, foi lhe dada a tarefa de vericar
	se a solução de determinado jogo é válida ou não.

	ENTRADA
	Cada caso de teste é composto por 9 linhas, cada qual com 9 números separados por um espaço
	e terminadas por uma quebra de linha, que representam um jogo de Sudoku.

	SAÍDA
	Seu programa deve imprimir uma única linha de saída, contendo a mensagem "solução correta!"
	caso o jogo esteja válido de acordo com as condições do Sudoku, senão, deve imprimir
	"solução incorreta!".

	Exemplo de entrada e saída:

	Entrada 				Saída
	9 6 3 1 7 4 2 5 8
	1 7 8 3 2 5 6 4 9
	2 5 4 6 8 9 7 3 1
	8 2 1 4 3 7 5 9 6
	4 9 6 8 5 2 3 1 7
	7 3 5 9 6 1 8 2 4
	5 8 9 7 1 3 4 6 2
	3 1 7 2 4 6 9 8 5
	6 4 2 5 9 8 1 7 3
							solução correta!
*/
#define ERRADO  "solução incorreta!"n"
#define CORRETO "solução correta!"n"
#include <stdio.h>

int main()
{

	int matriz[9][9], soma_certa = 0, soma1 = 0, soma2 = 0;
	int i, j, k, l, x, y;

	//LEITURA DA ORDEM E POSIÇÕES

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {

			scanf("%i", &matriz[i][j]);
		}
	}

	//COMPARAÇÃO COM LINHA(i)

	for (j = 0; j < 9; j++) {

		for (i = 0; i < 9; i++) {

			soma1 += matriz[i][j];
		}

		if (soma1 == 45)
			soma_certa += 1;

		soma1 = 0;
	}

	//COMPARAÇÃO COM COLUNA(j)

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {

			soma2 += matriz[i][j];
		}

		if (soma2 == 45)
			soma_certa += 1;

		soma2 = 0;
	}

	//COMPARAçãO COM REGIÃO 3x3

	for (i = 0; i < 9; i += 3) {
		for (j = 0; j < 9; j += 3) {
			for (k = 0; k < 3; k++) {
				for (l = 0; l < 3; l++) {
					for (x = 0; x < 3; x++) {
						for (y = 0; y < 3; y++) {

							if (matriz[k + i][l + j] == matriz[x + i][y + j] && (k != x || y != l)) {

								printf(ERRADO);
								return (0);
							}
						}
					}
				}
			}
		}
	}

	if (soma_certa == 18)
		printf(CORRETO);
	else
		printf(ERRADO);

	return (0);
}
