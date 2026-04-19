/*São dados três inteiros positivos x, n e m. Encontre o valor de x^n mod m.

Entrada
A entrada contém três inteiros positivos x, n e m
(1 ≤ x, m ≤ 10^9, 2 ≤ n ≤ 10^7).

Saída
Imprima um inteiro — o valor de x^n mod m.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    long long x, n, m, k;

    cin >> x >> n >> m;

    if (x >= 1 && x <= 1000000000 &&
        m >= 1 && m <= 1000000000 &&
        n >= 2 && n <= 10000000) {

        k = 1;
        x %= m;

        while (n > 0) {
            if (n % 2 == 1) {
                k = (k * x) % m;
            }

            x = (x * x) % m;
            n = n / 2;
        }

        cout << k << endl;
    }

    return 0;
}
