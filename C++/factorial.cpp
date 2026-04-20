/*Calculate the factorial of the integer n.

Input
The input contains one integer n (0≤n≤3000).

Output
Output the factorial of n.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> resultado;
    resultado.push_back(1);

    for(int i = 2; i <= n; i++){
        int carry = 0;
        for(int j = 0; j < resultado.size(); j++){
            int prod = resultado[j] * i + carry;
            resultado[j] = prod % 10;
            carry = prod / 10;
        }
        while(carry > 0){
            resultado.push_back(carry % 10);
            carry /= 10;
        }
    }


    for(int i = resultado.size() - 1; i >= 0; i--){
        cout << resultado[i];
    }
    cout << endl;

    return 0;
}
