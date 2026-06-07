/*
 * 0766 -Appearing Numbers.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */
 /*
Números Aparecendo

Enunciado do Problema
0 Dada a seguinte sequência de inteiros de comprimento , gera todos os inteiros que aparecem pelo menos vezes em sequência , em ordem crescente. 9NA=(A1,A2,…,AN)A1

Restrição
1≦N≦100．
0≦Ai≦9 (1≦i≦N)．
Todos os valores de entrada são inteiros.

Entrada
A entrada é fornecida no seguinte formato.
N
A1   A2   …   AN

Fazer esforço
Saia todos os inteiros que aparecem pelo menos vezes em sequência, separados por quebras de linha, em ordem decrescente. A1
*/


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main(){
	int N;
	
	cin >> N;
	if(N >= 1 and N <= 100){
		
	vector<int> numeros(N);
	
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	sort(numeros.begin(), numeros.end());
	numeros.erase(unique(numeros.begin(), numeros.end()), numeros.end());
	
	for(int x : numeros){
		cout << x << endl;
	}
	}
	
	return 0;
}
