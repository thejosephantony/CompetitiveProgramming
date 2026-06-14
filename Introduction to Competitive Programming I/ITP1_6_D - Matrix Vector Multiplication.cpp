/*
 * ITP1_6_D - Matrix Vector Multiplication.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
	Esse problema é multiplicação de matriz por vetor.

	O enunciado diz: leia uma matriz A de tamanho n x m, depois leia um vetor b com m elementos, e imprima o resultado A * b. O resultado será um vetor c com n elementos.

	A fórmula é:

	c[i] = A[i][0] * b[0] + A[i][1] * b[1] + ... + A[i][m-1] * b[m-1]
 */


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
	int n;
	int m;
	
	cin >> n >> m;
	
	vector<vector<int>> A(n, vector<int>(m));
	vector<int> b(m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	
	for(int i = 0; i < n; i++){
		int soma = 0;
		
		for (int j = 0; j < m; j++){
			soma = A[i][j] * b[j] + soma;
		}
		cout << soma << endl;
	}
	return 0;
}

