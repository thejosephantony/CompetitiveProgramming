/*
 * O Maior.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */
 
/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".*/

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::abs;

int maior(int x, int y){
	return (x + y + abs(x-y))/2;
}


int main(){
	int a;
	int b;
	int c;
	
	cin >> a >> b >> c;

	cout << maior(maior(a,b), c) << " eh o maior" << endl;
	return 0;
}

