/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Lista 05 - Exercício 05 - TeY Code
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

	RSA é um algoritmo de criptograa baseado no conceito de sistemas de chaves assimétricas e
	funções matemáticas de mão única (sem função inversa). é considerado um dos mais seguros,
	e está entre os mais utilizados em protocolos de serviços dos nossos dias. Foi também o primeiro
	algoritmo a possibilitar criptograa e assinatura digital, e uma das grandes inovações em
	criptograa de chave pública.
	O RSA trabalha com o conceito de pares de chaves assimétricas, no qual são criadas duas
	chaves, a pública e a privada. A chave pública é utilizada para criptografar as mensagens, não
	sendo possível derivar dela a outra chave, e deve ser distribuída a todos de quem se queira
	receber as mensagens criptografadas.
	A chave privada deve ser mantida no mais absoluto sigilo, sendo ela a única capaz de descriptografar
	as mensagens criptografadas com a chave pública. Para a geração das chaves obtém-se
	dois números primos grandes, B e P. Eles são a base do RSA, pois a partir deles é gerado N,
	um dos parâmetros da chave pública, calculado pelo produto entre B e P.
	Quebrar o RSA consiste exatamente em descobrir B e P, para que, a partir deles, obter-se a
	chave privada. Esse é um sistema de força bruta, porém, deve-se ressaltar que o número N
	é o produto de dois números primos gigantes (na prática, possuem 100 dígitos ou mais). Um
	computador potente pode levar milhares de anos de processamento para conseguir chegar nos
	fatores de N de uma chave RSA relativamente forte (que é de, pelo menos, 1024 bits).
	Considerando que a mensagem a ser codicada é uma senha numérica K de seis dígitos, é
	possível propor um modelo simplicado (aqui chamado TeY Code) baseado em dois números
	primos distintos B e P menores que 107, escolhidos aleatoriamente. Neste, a chave secreta (Q)
	e o código gerador (N) são calculados pela soma e produto de B e P, respectivamente, e a
	senha codicada pode ser dada por: C = K * Q.
	Exemplo de senha codicada usando o Sistema TeY:
	K = 123456 (senha)
	B = 998281 (primeiro número primo)
	P = 504619 (segundo número primo)
	Q = B + P = 998281 + 504619 = 1502900 (chave secreta)
	N = B * P = 998281 * 504619 = 503751559939 (código gerador)
	C = K * Q = 123456 * 1502900 = 185542022400 (senha codicada)
	Dados a senha codicada C e o código gerador N, a sua missão é quebrar a chave secreta e
	descobrir a senha original K.
	ENTRADAS
	Cada caso de teste é composto por dois números inteiros separados por um espaço em branco:
	- Senha codicada C (menor que 10^13) e
	- Código gerador N (menor que 10^12).

	Exemplo de entrada e saída:

	Entrada 								Saída
	185542022400 503751559939 (C e N)
											123456 (K)
*/

#include <stdio.h>

int main()
{

	long int p, b, n, c, k, q;

	scanf("%ld %ld", &c, &n);

	for (p = 2; n % p != 0; p++);

	b = n / p;

	q = p + b;

	k = c / q;

	printf("%ld", k);

	return 0;
}
