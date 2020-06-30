/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 06 - Exercício 04 - Sequência de Recamán
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

	Benjamin e seu amigo, navegando pela enciclopédia OEIS, descobriram uma sequência chamada
	Sequência de Recamán. Por terem gostado muito dela, acabaram inventando um jogo usando-a
	como base.
	A sequência é formada por saltos para frente ou para trás, o tamanho dele inicia em um e
	incrementa uma unidade por vez. O salto é dado para trás caso o número resultante não seja
	negativo e não tenha aparecido anteriormente na sequência, caso contrário, o salto é para frente.
	Sendo R(0) = 0, começamos com o salto 1: R(0) - 1 = -1, por ser negativo, o passo é para
	frente, logo, R(1) = R(0) + 1 = 1.
	O próximo salto é 2: R(1) - 2 = -1, por ser negativo, o passo é para frente, logo, R(2) =
	R(1) + 2 = 3.
	Para salto 3: R(2) - 3 = 0, por já ter aparecido anteriormente na sequência, o passo é para
	frente, logo, R(3) = R(2) + 3 = 6.
	Em seguida o salto é 4: R(3)-4 = 2, como é um número positivo e não apareceu anteriormente,
	ele é escolhido.
	E a sequência segue assim por diante.
	O desao do jogo é: supondo que os dois amigos não saibam a sequência decor, cada um deve
	escolher um n-ésimo termo, e ganha quem escolher o R(n) maior.

	ENTRADA
	A entrada consistirá de uma série de linhas, cada uma contendo a jogada n (0 < n <= 20:000)
	dos dois jogadores, separadas por um espaço. O m da entrada é indicado por uma linha
	consistindo do valor zero (0).

	SAÍDA
	A saída consistirá de uma série de linhas, uma linha para cada linha de entrada. Cada linha
	consistirá de um j que indicará qual jogador é o ganhador, 0 para empate, 1 para o primeiro
	jogador e 2 para o segundo jogador.

	Exemplo de entrada e saída:
	Entrada Saida
	24 20
			0
	18 19
			2
	3 4
			1
	0

*/


#include <stdio.h>
#include <math.h>

int main()
{

	signed long int vetor[20000], aux = 0, sub = 0;

	int i = 1, j = 0, num, num1;

	vetor[0] = 0;

	//SEQUÊNCIA

	while (i <= 20000) {

		sub = vetor[i - 1] - i;

		//COMPARAÇÃO PARA VER SE O NUMERO JA FOI USADO OU NÃO

		//a(0) = 0; a(n) = a(n-1) - n se positivo e não está na sequência, do contrário a(n) = a(n-1) + n.

		for (j = 0; j < i; j++) {

			if (sub < 0 || vetor[j] == sub)
				sub = vetor[i - 1] + i;

		}

		vetor[i] = sub;
		i++;
	}

	//VERIFICADOR DE QUAL É O MAIOR R(n)

	num = 1;
	num1 = 1;

	while (num != 0 && num1 != 0) {

		scanf("%i", &num);

		if (num == 0)
			return (0);

		scanf("%i", &num1);

		if (vetor[num] > vetor[num1])
			printf("1\n");

		if (vetor[num] == vetor[num1])
			printf("0\n");

		if (vetor[num1] > vetor[num])
			printf("2\n");
	}

	return (0);
}
