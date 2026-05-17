#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> alturas(10);

    for (int i = 0; i < 10; i++) {
        cin >> alturas[i];
    }

    sort(alturas.begin(), alturas.end(), greater<int>());

    cout << alturas[0] << endl;
    cout << alturas[1] << endl;
    cout << alturas[2] << endl;

    return 0;
}
