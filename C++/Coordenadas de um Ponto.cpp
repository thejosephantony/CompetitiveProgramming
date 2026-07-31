/*
 * Coordenadas de um Ponto.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
	double x;
	double y;
	
	cin >> x >> y;
	
	if(x == 0.0 && y == 0.0){
    cout << "Origem" << endl;
	}
	else if(x == 0.0){
		cout << "Eixo Y" << endl;
	}
	else if(y == 0.0){
		cout << "Eixo X" << endl;
	}
	else if(x > 0.0 && y > 0.0){
		cout << "Q1" << endl;
	}
	else if(x < 0.0 && y > 0.0){
		cout << "Q2" << endl;
	}
	else if(x < 0.0 && y < 0.0){
		cout << "Q3" << endl;
	}
	else{
		cout << "Q4" << endl;
	}
	return 0;
}

