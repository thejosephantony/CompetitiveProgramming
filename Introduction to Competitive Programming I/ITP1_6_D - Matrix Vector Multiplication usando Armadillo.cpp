/*
 * ITP1_6_D - Matrix Vector Multiplication usando Armadillo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include <iostream>
#include <armadillo>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    int m;

    cin >> n >> m;

    arma::Mat<int> A(n, m);
    arma::Col<int> b(m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A(i, j);
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> b(i);
    }

    arma::Col<int> c = A * b;

    for (int i = 0; i < n; i++) {
        cout << c(i) << endl;
    }

    return 0;
}
