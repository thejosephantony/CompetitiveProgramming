/*
Find the number of N-digit numbers such that the sum of their digits
is equal to the product of their digits.

Also, output the smallest such number for the given N, where:
1 <= N < 10

Input:
The number N (1 <= N < 10)

Output:
Print two numbers separated by a space:
1) The quantity of such N-digit numbers
2) The smallest among them
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int cont = 0;
    int menor = -1;
    int N;

    cin >> N;
    for (int i = pow(10, N-1); i < pow(10, N); i++) {
    int temp = i;
    int soma = 0;
    int produto = 1;

    while (temp > 0) {
        int digito = temp % 10;
        soma += digito;
        produto *= digito;
        temp /= 10;
    }

    if (soma == produto) {
        cont++;
        if (menor == -1) menor = i;
    }
}
    cout << cont << " " << menor << endl;

    return 0;
}

// ineficiente, roda em torno de 1 minuto para N = 9, mas funciona.