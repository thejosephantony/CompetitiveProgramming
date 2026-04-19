/* Decompose the given three-digit integer into its digits.

Input: One three-digit integer (positive or negative).

Output:Print each digit of the number on a separate line, as shown in the example.*/


/* Decompose the given three-digit integer into its digits.

Input: One three-digit integer (positive or negative).

Output:Print each digit of the number on a separate line, as shown in the example.*/


#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int num;
    int unidade;
    int dezena;
    int centena;

    cin >> num;
    if(num < 0){
        num = num * (-1);
        unidade = num % 10;
        dezena = (num % 100)/10;
        centena = num/100;
        cout << centena << endl << dezena << endl << unidade << endl;
    }
    else{
        unidade = num % 10;
        dezena = (num % 100)/10;
        centena = num/100;
        cout << centena << endl << dezena << endl << unidade << endl;
    }
    return 0;
}
// Execution time limit is 1 second
// Runtime memory usage limit is 128 megabytes