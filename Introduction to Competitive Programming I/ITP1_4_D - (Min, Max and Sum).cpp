/*Min, Max and Sum
Write a program which reads a sequence of n
 integers ai(i=1,2,...n)
, and prints the minimum value, maximum value and sum of the sequence.

Input
In the first line, an integer n
 is given. In the next line, n
 integers ai
 are given in a line.

Output
Print the minimum value, maximum value and sum in a line. Put a single space between the values.

Constraints
0<n≤10000
−1000000≤ai≤1000000*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int N;
    cin >> N;

    int num;
    int Max, Min;
    long long soma = 0;

    cin >> num;
    Max = Min = num;
    soma = num;

    for (int i = 2; i <= N; i++) {
        cin >> num;

        if (num > Max)
            Max = num;

        if (num < Min)
            Min = num;

        soma += num;
    }

    cout << Min << " " << Max << " " << soma << endl;

    return 0;
}
