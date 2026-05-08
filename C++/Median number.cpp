/*Three integers a, b, c are given, each of which satisfies ∣a∣,∣b∣,∣c∣≤1000.

Input
Three integers a, b, c are given, each of which satisfies ∣a∣,∣b∣,∣c∣≤1000.

Output
Print the median among the three numbers.*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int maximo(int x, int y, int z){
    return max(x, max(y, z));
}
int minimo(int x, int y, int z){
    return min(x, min(y,z));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a;
    int b;
    int c;
    int med;

    cin >> a >> b >> c;
    if(a <= 1000 and b <= 1000 and c <= 1000){
        if(a < 0) a = a * (-1);
        if(b < 0) b = b * (-1);
        if(c < 0) c = c * (-1);
        med = a + b + c - maximo(a, b, c) - minimo(a, b, c);
        cout << med << endl;
    }
    return 0;
}
