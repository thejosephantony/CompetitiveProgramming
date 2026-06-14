/*
 * Área.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */
 
/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.*/
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double areaTrianguloRetangulo(double a, double b){
	return (a * b)/2.0;
}

double areaCirculo(double r){
	const double PI = 3.14159;
	return r * r * PI;
}

double areaTrapezio(double a, double b, double c){
		return (a + b) * c * 1.0/2.0;
}

double areaRetangulo(double a, double b){
		return a * b;
}
double areaQuadrado(double a){
		return a * a;
}


int main(){
	cout << fixed << setprecision(3);
	
	double A;
	double B;
	double C;
	
	cin >> A >> B >> C;
	
	cout << "TRIANGULO: " << areaTrianguloRetangulo(A, C) << endl;
	cout << "CIRCULO: " << areaCirculo(C) << endl;
	cout << "TRAPEZIO: " << areaTrapezio(A, B, C) << endl;
	cout << "QUADRADO: " << areaQuadrado(B) << endl;
	cout << "RETANGULO: " << areaRetangulo(A, B) << endl;

	return 0;
}

