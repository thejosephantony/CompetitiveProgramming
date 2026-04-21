/*The lengths of the sides of a triangle are given. Determine whether the triangle is right-angled.

Input
Three positive integers a,b,c — the lengths of the triangle's sides, each not exceeding 1000.

Output
Print "YES" if the triangle is right-angled, and "NO" otherwise.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
