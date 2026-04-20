/*Execution time limit is 1 second
Runtime memory usage limit is 64 megabytes

Given a rational fraction m/n

Write its decimal representation with k digits after the decimal point.

Input
The input contains three integers m, n, and k (0<m,n≤100, 0≤k≤1000) given in one line.

Output
Print k digits after the decimal point of the given number.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;


    cout << m / n; // parte inteira

    if(k > 0){
        cout << ".";
        m = m % n; // resto

        for(int i = 0; i < k; i++){
            m *= 10;
            cout << m / n;
            m = m % n;
        }
    }

    cout << endl;
    return 0;
}
