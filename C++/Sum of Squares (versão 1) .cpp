/* Find the sum of the squares of two integers.
 Input
    Two integers a and b are given. Each of them does not exceed 10^9 in absolute value.
Output
    Print the value of the expression a^2+b^2
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    long long a;
    long long b;
    long long sum_squares;

    cin >> a >> b;
    if(a <= 1000000000 && b <= 1000000000){
        sum_squares = (a*a) + (b*b);
        cout << sum_squares << endl;
    }
    return 0;
}
