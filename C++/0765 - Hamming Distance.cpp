/*
Distância de Hamming (Hamming Distance)
São dados um inteiro N e duas strings S e T de comprimento N.
Imprima a distância de Hamming entre S e T.

A distância de Hamming entre S e T é a quantidade de índices i
tais que o i-ésimo caractere de S é diferente do i-ésimo caractere de T,
onde 1 <= i <= N.

Restrições
1 <= N <= 100
N é um inteiro.
S e T são strings de comprimento N formadas por letras minúsculas do inglês.

Entrada
A entrada é fornecida no seguinte formato: N S T

Saída
Imprima a distância de Hamming entre S e T.


 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 

*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
	
	int N;
	int distancia = 0;
	string S, T;
	
	cin >> N;
	
	if(N >= 1 and N <= 100){
		cin >> S;
		cin >> T;
		if((S.size() == static_cast<size_t> (N)) and (T.size() == static_cast<size_t> (N))){
			for(int i = 0; i < N; i++){
				if(S[i] != T[i]){
					distancia++;
				}
			}
		}
	}
	cout << distancia << endl;
	
}


