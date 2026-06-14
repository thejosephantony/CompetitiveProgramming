/*
 * Distância Entre Dois Pontos.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */
 
/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:

Distancia =

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.*/


#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::pow;
using std::sqrt;

double distanciaEntreDoisPontos(double x1, double y1, double x2, double y2){
		double x1x2 = pow(x2-x1, 2);
		double y1y2 = pow(y2-y1, 2);
		double dist = sqrt(x1x2 + y1y2);
		return dist;
}

int main(){
	cout << fixed << setprecision(4);
	
	double x1;
	double x2;
	double y1;
	double y2;
	
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	cout << distanciaEntreDoisPontos(x1, y1, x2, y2) << endl;
	
	
	return 0;
	
}

