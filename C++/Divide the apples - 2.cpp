/*n schoolchildren divide k apples evenly, the residue remains in the basket. How many apples remain in the basket?

Input
Two positive integers n and k not greater than 1500 — rarely are there more pupils in school, and where to find such a basket?
Output
Print the number of apples in the basket.*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;
    int rest_apples;

    cin >> n >> k;

    if(n <= 1500 and k <= 1500){
        rest_apples = k % n;
        cout << rest_apples << endl;
    }
    return 0;

}
