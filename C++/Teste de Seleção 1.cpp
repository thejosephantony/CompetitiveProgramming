/*
 * Teste de Seleção 1.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

Entrada
Quatro números inteiros A, B, C e D.

Saída
Mostre a respectiva mensagem após a validação dos valores.

 */


#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main(){
	int A;
	int B;
	int C;
	int D;
	
	cin >> A >> B >> C >> D;
	if(((B > C) and (D > A)) and ((A + B) < (C + D)) and ((D > 0) and (C > 0)) and (A % 2 == 0)){
		cout <<	"Valores aceitos" << endl;
	}
	else{
		cout << "Valores nao aceitos" << endl;
		}
	return 0;
}
