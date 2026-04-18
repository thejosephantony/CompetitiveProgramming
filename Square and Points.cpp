/*Given a grid of points with integer coordinates, determine the maximum number of such points that can be covered by a square with side length N.

Input
A single integer N (1≤N≤10000) — the side length of the square.

Output
Output the maximum number K of points with integer coordinates that can be covered by the square.*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N;
    int K;

    cin >> N;
    if(N >= 1 && N <= 10000){
        K = pow((N+1),2);
        cout << K << endl;
    }
    return 0;
}
