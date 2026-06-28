/*
 * Idade em Dias.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.

 */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(){
	int Tdias;
	int dias;
	int meses;
	int anos;
	
	cin >> Tdias;
	
	anos = Tdias/365;
	meses = (Tdias % 365)/30;
	dias = (Tdias % 365) % 30;

	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
	
	return 0;
}

