/*
Determine the type of a triangle (equilateral, isosceles, or scalene) based on the given side lengths.

Input
One line contains 3 integers representing the lengths of the triangle's sides. The side lengths do not exceed 100.

Output
Print 1 if the triangle is equilateral, 2 if it is isosceles, and 3 if it is scalene.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;

    if((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)){
        if((l1 == l2) && (l1 == l3)){
            cout << 1 << endl; // equilátero
        }
        else if((l1 != l2) && (l1 != l3) && (l2 != l3)){
            cout << 3 << endl; // escaleno
        }
        else{
            cout << 2 << endl; // isósceles
        }
    }
    return 0;
}
