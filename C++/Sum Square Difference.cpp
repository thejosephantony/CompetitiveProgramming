// The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... + 10^2 = 385.

// The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)^2 = 55^2 = 3025.

// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int soma_quadrados = 0;
    int quadrado_soma = 0;
    int diferenca;

    for(int i = 1; i <= 100; i++){
        soma_quadrados = soma_quadrados + i * i;
        quadrado_soma = quadrado_soma + i;
    }
    quadrado_soma = quadrado_soma * quadrado_soma;
    diferenca = quadrado_soma - soma_quadrados;
    cout << "A diferenca entre o quadrado da soma e a soma dos quadrados dos 100 primeiros numeros naturais e: " << diferenca << endl;
    return 0;
}
