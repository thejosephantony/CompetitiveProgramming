/*List of Top 3 Hills
There is a data which provides heights (in meter) of mountains. The data is only for ten mountains.

Write a program which prints heights of the top three mountains in descending order.

Input
Height of mountain 1
Height of mountain 2
Height of mountain 3
 .
 .
Height of mountain 10
Constraints
0 ≤ height of mountain (integer) ≤ 10,000

Output
Height of the 1st mountain
Height of the 2nd mountain
Height of the 3rd mountain*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    vector<int> alturas(10);

    for(int i = 0; i < 10; i++){
        cin >> alturas[i];
    }
    int maior1 = alturas[0];
    int maior2 = alturas[1];
    int maior3 = alturas[2];

    if(maior2 > maior1){
        int aux = maior1;
        maior1 = maior2;
        maior2 = aux;
    }

    if(maior3 > maior1){
        int aux = maior1;
        maior1 = maior3;
        maior3 = maior2;
        maior2 = aux;
    }
    if(maior3 > maior2){
        int aux = maior2;
        maior2 = maior3;
        maior3 = aux;
    }

    for(int j = 3; j < 10; j++){
        if(alturas[j] > maior1){
            maior3 = maior2;
            maior2 = maior1;
            maior1 = alturas[j];
        }
        else if(alturas[j] > maior2){
            maior3 = maior2;
            maior2 = alturas[j];
        }
        else if(alturas[j] > maior3){
            maior3 = alturas[j];
        }
    }
    cout << maior1 << endl;
    cout << maior2 << endl;
    cout << maior3 << endl;
}



