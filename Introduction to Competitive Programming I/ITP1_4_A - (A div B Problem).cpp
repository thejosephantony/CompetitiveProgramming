/*A/B Problem
Write a program which reads two integers a and b, and calculates the following values:

a ÷ b: d (in integer)
remainder of a ÷ b: r (in integer)
a ÷ b: f (in real number)
Input
Two integers a and b are given in a line.

Output
Print d, r and f separated by a space in a line. For f, the output should not contain an absolute error greater than 10^-5.

Constraints
1 ≤ a, b ≤ 10^9*/
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    cout << fixed << setprecision(5);

    unsigned int a, b;
    unsigned int rest;
    unsigned int div_inteira;
    long double div_real;

    cin >> a >> b;

    div_inteira = a / b;
    rest = a % b;
    div_real = (long double)a / b;

    cout << div_inteira << " " << rest << " " << div_real << endl;

    return 0;
}
