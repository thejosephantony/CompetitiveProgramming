#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int *x = new int[num];

    for(int i = 0; i < num; i++){
        cin >> x[i];
    }
    for(int i = 0; i < num; i++){
        if(x[i] >= 0){
            x[i] += 2;
        }
    }
    for(int i = 0; i < num; i++){
        cout << x[i];
        if(i < num - 1) cout << " ";
    }

    delete[] x;
    return 0;
}