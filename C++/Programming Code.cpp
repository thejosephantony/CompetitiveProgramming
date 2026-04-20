/*It is known that Sergey writes A lines of code every working day. Every week he works B days and rests on the remaining days. Sergey has decided to work continuously for C weeks. It is necessary to determine how many lines of code Sergey will write during this period.

Input
Three lines, each containing one integer:

A — the number of lines of code Sergey writes in one working day (0≤A≤10000).

B — the number of working days in a week (0≤B≤7).

C — the number of weeks Sergey will work (0≤C≤500).

Output
Output a single number — the number of lines of code Sergey will write in C weeks.*/

#include <iostream>
#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int A;
    int B;
    int C;
    int numLinhas;

    cin >> A >> B >> C;

    if((A >= 0 && A <= 10000) && (B >= 0 && B <= 7) && (C >= 0 && C <= 500)){
        numLinhas = A * B * C;
        cout << numLinhas << endl;
    }
    return 0;

}
