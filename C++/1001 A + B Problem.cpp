/*
 * 1001 A + B Problem.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

Calculate a + b

Input Specification:
The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.

Output Specification:
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
 */


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int a;
	int b;
	int c;
	
	cin >> a >> b;
	c = a + b;
	
	cout << c << endl; 
	return 0;
}

