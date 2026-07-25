/*
 * Intervalo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

Entrada
O arquivo de entrada contém um número com ponto flutuante qualquer.

Saída
A saída deve ser uma mensagem conforme exemplo abaixo.
 */


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
int main(){
	double num;

	cin >> num;
	
	if(num < 0 or num > 100){
		cout << "Fora de intervalo" << endl;
	}
	else if(num >= 0 and num <= 25){
		cout << "Intervalo [0,25]" << endl;
	}
	else if(num <= 50){
		cout << "Intervalo (25,50]" << endl;	
	}
	else if(num <= 75){
		cout << "Intervalo (50,75]" << endl;
	}
	else{
		cout << "Intervalo (75,100]" << endl;
	}
	
	return 0;
}

