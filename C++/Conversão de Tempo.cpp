/*
 * Conversão de Tempo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

 */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;



int main(){
	int Tsegundos;
	int minutos;
	int segundos;
	int horas;
	
	cin >> Tsegundos;
	
	horas = Tsegundos/3600;
	minutos = (Tsegundos % 3600)/60;
	segundos = Tsegundos % 60;
	
	cout << horas << ":" << minutos << ":" << segundos << endl;
	return 0;
}

