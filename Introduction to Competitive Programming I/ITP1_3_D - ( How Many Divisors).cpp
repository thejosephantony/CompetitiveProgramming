/*How Many Divisors?
Write a program which reads three integers , and , and prints the number of divisors of between and . abccab

Input
Three integers , and are given in a line separated by a single space. abc

Output
Print the number of divisors in a line.

Constraints
1 ≤ , , ≤ 10000abc
a ≤ b
*/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int a;
    int b;
    int c;
    int div = 0;

    cin >> a >> b >> c;

    for (int i = a; i <= b; i++) {
        if (c % i == 0) {
            div++;
        }
    }

    cout << div << endl;
    return 0;
}
