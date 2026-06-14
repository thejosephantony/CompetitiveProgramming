/*
 * Cálculo Simples.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */
/*)Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.*/
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
int main(){
	cout << fixed << setprecision(2);
	
	int codigoP1;
	int codigoP2;
	int numP1;
	int numP2;
	double valorP1;
	double valorP2;
	double valorApagar;
	
	cin >> codigoP1 >> numP1 >> valorP1;
	cin >> codigoP2 >> numP2 >> valorP2;
	
	valorApagar = numP1 * valorP1 + numP2 * valorP2;
	
	cout << "VALOR A PAGAR: R$ " << valorApagar << endl;
	return 0;
}

