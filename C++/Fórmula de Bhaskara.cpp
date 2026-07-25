/*
 * Fórmula de Bhaskara.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
Imprima sempre o final de linha após cada mensagem.
 */


#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::sqrt;

int main(){
	cout << fixed << setprecision(5);
	
	double A;
	double B;
	double C;
	
	double delta;
	
	double R1;
	double R2;
	
	cin >> A >> B >> C;
	
	delta = B * B - 4 * A * C;
	R1 = (- B + sqrt(delta))/(2*A);
	R2 = (- B - sqrt(delta))/(2*A);
	
	if((delta < 0) or (A == 0)){
		cout << "Impossivel calcular" << endl;	
	}
	else{
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}
		
	return 0;
}

