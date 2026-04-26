/*X Cubic
Write a program which calculates the cube of a given integer x.

Input
An integer x is given in a line.

Output
Print the cube of x in a line.

Constraints
1 ≤ x ≤ 100*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N;
    int cubic;

    cin >> N;
    if(N >= 1 && N <= 100){
        cubic = N * N * N;
        cout << cubic << endl;
    }
    return 0;

}
