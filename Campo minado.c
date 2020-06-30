/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 07 - Exercício 02 - Campo Minado
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

	Como um programador muito ligado em jogos, você tem a excelente ideia de fazer um Campo
	Minado e brincar com a sorte. Seu programa deve receber um mapa de minas do campo, e
	depois, você fará suas jogadas.

	ENTRADA
	Cada caso de teste é composto por diversas linhas, a primeira possui um inteiro t (2 6 t 6 10)
	que representa o tamanho do campo em número de linhas e colunas, as seguintes t linhas
	possuem t caracteres, separados por um espaço, que representam o conteúdo de cada posição,
	sendo X para quando não há mina e M quando há uma mina. A próxima linha possui um inteiro
	j (0 <= j <= 100) que representa o número de jogadas que você fará, e as próximas linhas deverão
	conter dois inteiros l (1 <= l <= t) e c (1 <= c <= t), separados por um espaço, que representam,
	respectivamente, as coordenadas linha e coluna de cada jogada. O canto superior esquerdo do
	campo possui as coordenadas (1, 1).

	SAÍDA
	Seu programa deve imprimir uma única linha de saída, contendo a mensagem \você venceu!"
	caso as jogada tenham sido feitas em todos os pontos sem mina, \você perdeu :(" caso tenha
	jogado em um lugar com mina, ou \o jogador saiu do jogo." se não forem feitas jogadas
	para todos os pontos sem mina.

	Exemplo de entrada e saída:
	Entrada Saída
	2
	X M
	M X
	2
	1 1
	2 2
			você venceu!
*/

#define VENCEU "você venceu!\n"
#define PERDEU "você perdeu :(\n"
#define SAIU "o jogador saiu do jogo.\n"
#include <stdio.h>

int main() {

	int n, i, j, jogada, m, k, contador, mina = 0, sem_mina = 0, vacuo = 0;
	char matriz[10][10];

	//LEITURA DO TAMANHO E POSIÇÕES
	scanf("%i", &n);

	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++) {

			scanf(" %c", &matriz[i][j]);

			if (matriz[i][j] == 'X')
				vacuo++;
		}
	}

	//JOGADAS

	scanf("%i", &jogada);

	for (i = 0; i < jogada; i++) {

		scanf("%i %i", &m, &k);

		m -= 1;
		k -= 1;

		if (matriz[m][k] == 'M') {

			printf(PERDEU);
			return (0);
		}

		else if (matriz[m][k] == 'X')
			sem_mina += 1;
	}

	if (sem_mina == vacuo) {

		printf(VENCEU);
		return (0);
	}

	if (vacuo > jogada) {

		printf(SAIU);
		return (0);
	}

	return (0);
}
