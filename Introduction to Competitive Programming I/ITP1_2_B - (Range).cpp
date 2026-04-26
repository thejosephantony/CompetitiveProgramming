/*Range
Write a program which reads three integers a, b and c, and prints "Yes" if a<b<c, otherwise "No".

Input
Three integers a, b and c separated by a single space are given in a line.

Output
Print "Yes" or "No" in a line.

Constraints
0 ≤ a, b, c ≤ 100*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int a;
    int b;
    int c;

    cin >> a >> b >> c;
    if((a < b) and (b < c) and (a < c)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;

}
