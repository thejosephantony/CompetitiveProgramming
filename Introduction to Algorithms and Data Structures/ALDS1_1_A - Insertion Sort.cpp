/*
 * ALDS1_1_A - Insertion Sort.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * nsertion Sort
Write a program of the Insertion Sort algorithm which sorts a sequence A in ascending order. The algorithm should be based on the following pseudocode:

for i = 1 to A.length-1
    key = A[i]
    insert A[i] into the sorted sequence A[0,...,j-1]
    j = i - 1
    while j >= 0 and A[j] > key
        A[j+1] = A[j]
        j--
    A[j+1] = key
Note that, indices for array elements are based on 0-origin.

To illustrate the algorithms, your program should trace intermediate result for each step.

Input
The first line of the input includes an integer N, the number of elements in the sequence.

In the second line, N elements of the sequence are given separated by a single space.

Output
The output consists of N lines. Please output the intermediate sequence in a line for each step. Elements of the sequence should be separated by single space.

Constraints
1 <= N <= 100
 * 
 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main(){
	vector<int> numeros;
	int N;
	int valor;
	
	cin >> N;
	if(N >= 1 and N <= 100){
		numeros.reserve(N);
		
		for(int i = 1; i <= N; i++){
			cin >> valor;
			numeros.push_back(valor);
		}
	}
	
	return 0;
}

