/*
 * Distancia.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */
/*Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.

Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.

Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.

Entrada
O arquivo de entrada contém um número inteiro.

Saída
Imprima o tempo necessário seguido da mensagem "minutos".*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;


int main(){
	int distancia;
	const int diferencaVelocidade = 30;
	const int minutosHora = 60;
	int minutos;
	
	cin >> distancia;
	
	minutos = (distancia * minutosHora)/diferencaVelocidade;
	
	cout << minutos << " minutos" << endl;
	
	return 0;
}

