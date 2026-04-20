/*Given a three-digit positive integer n. Find the product of its digits.

Input
One three-digit positive integer n.

Output
Print the product of the digits of n.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N;

    int unidade;
    int dezena;
    int centena;
    int product;

    cin >> N;
    if(N >= 100 and N <= 999)

    unidade = N % 10;
    dezena = (N % 100)/10;
    centena = N/100;

    product = unidade * dezena * centena;
    cout << product << endl;

}
