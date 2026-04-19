/*A sequence of integers is given. Increase each of its non-negative elements by 2.

Input
The first line contains the number of elements n (n≤100). The second line contains the elements of the sequence, each with an absolute value not exceeding 100.

Output
Print n integers in one line: the new values of the sequence elements in the same order as given.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int x[100];

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

    return 0;
}

