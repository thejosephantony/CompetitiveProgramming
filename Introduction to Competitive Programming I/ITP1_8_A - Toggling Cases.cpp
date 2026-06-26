/*
 * ITP1_8_A - Toggling Cases.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

Toggling Cases

Write a program which converts uppercase/lowercase letters to lowercase/uppercase for a given string.

Input
A string is given in a line.

Output
Print the converted string in a line. Note that you do not need to convert any characters other than alphabetical letters.

Constraints
The length of the input string < 1200
 
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::islower;
using std::isupper;
using std::toupper;
using std::tolower;

int main(){
	string sequencia;
	
	getline(cin, sequencia);
	
	for(int i = 0; i < static_cast<int>(sequencia.size()); i++){
		
		if(islower(sequencia[i])){
			sequencia[i] = toupper(sequencia[i]);
		}
		else if(isupper(sequencia[i])){
			sequencia[i] = tolower(sequencia[i]);
		}
	}
	
	cout << sequencia << endl;
	
	return 0;
}

