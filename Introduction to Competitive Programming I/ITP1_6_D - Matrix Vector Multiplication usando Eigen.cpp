/*
 * ITP1_6_D - Matrix Vector Multiplication usando Eigen.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 * 
 */

#include <iostream>
#include <Eigen/Dense>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    int m;

    cin >> n >> m;

    Eigen::MatrixXi A(n, m);
    Eigen::VectorXi b(m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A(i, j);
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> b(i);
    }

    Eigen::VectorXi c = A * b;

    for (int i = 0; i < n; i++) {
        cout << c(i) << endl;
    }

    return 0;
}
