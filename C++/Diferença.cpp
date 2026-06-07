/*
 * Diferença.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(){
	int A;
	int B;
	int C;
	int D;
	int diferenca;
	cin >> A >> B >> C >> D;
	
	diferenca = (A * B) - (C * D);
	cout << "DIFERENCA = " << diferenca << endl;
	
	return 0;
}

