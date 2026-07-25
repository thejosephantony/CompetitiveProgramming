/*
 * Lanche.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
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
	cout << fixed << setprecision(2);
	
	int codigo;
	int quantidade;
	double totalPagar;
	
	cin >> codigo >> quantidade;
	
	switch(codigo){
		case 1:                              // cachorro-quente
			totalPagar = 4.00 * quantidade;
			cout << "Total: R$ " << totalPagar << endl;
			break;
		case 2:								// X-salada
			totalPagar = 4.50 * quantidade;  
			cout << "Total: R$ " << totalPagar << endl;
			break;
		case 3:
			totalPagar = 5.00 * quantidade; // x-bacon
			cout << "Total: R$ " << totalPagar << endl;
			break;
		case 4:
			totalPagar = 2.00 * quantidade; // torrada simples
			cout << "Total: R$ " << totalPagar << endl;
			break;
		case 5:
			totalPagar = 1.50 * quantidade; // refri
			cout << "Total: R$ " << totalPagar << endl;
			break;
	}
	
	return 0;
}

