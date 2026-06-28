/*
 * ITP1_8_B - Sum of Numbers.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
Sum of Numbers

Write a program which reads an integer and prints sum of its digits.

Input
The input consists of multiple datasets. For each dataset, an integer x is given in a line. The number of digits in x does not exceed 1000.

The input ends with a line including single zero. Your program should not process for this terminal symbol.

Output
For each dataset, print the sum of digits in x.
 */


#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::to_string;


int main(){
	string num;
	
	while(true){
		cin >> num;
		if(num == "0"){
			break;	
		}
		int somaDigitos = 0;
		for(char c : num){
			somaDigitos = somaDigitos + c - '0';
		}
		cout << somaDigitos << endl;
	}
	return 0;
}

