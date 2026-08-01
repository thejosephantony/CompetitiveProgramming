/*
 * Triƒngulo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
Leia 3 valores reais (A, B e C) e verifique se eles formam ou nÆo um triƒngulo. Em caso positivo, calcule o per¡metro do triƒngulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a  rea do trap‚zio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada cont‚m trˆs valores reais.

Sa¡da
O resultado deve ser apresentado com uma casa decimal.
 * 
 */


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
	cout << fixed << setprecision(1);
	
	double A;
	double B;
	double C;
	
	double PerimetroTriangulo;
	double AreaTrapezio;
	
	cin >> A >> B >> C;
	
	if((A + B > C) and (A + C > B) and (B + C > A)){
		PerimetroTriangulo = A + B + C;
		cout << "Perimetro = " << PerimetroTriangulo << endl;
	}
	else{
		AreaTrapezio = ((A+B)*C)/2;
		cout << "Area = " << AreaTrapezio << endl;
	}
	return 0;
}

