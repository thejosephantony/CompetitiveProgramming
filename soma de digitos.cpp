/*Dado um número inteiro N (pode ser grande!), calcule a soma dos seus dígitos.*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");
    long long n;
    int soma = 0;

    cout << "Informe um número: ";
    cin >> n;

    while(n > 0){
        soma = soma + n % 10;
        n = n/10;
    }

    cout << soma << endl;
    return 0;


}
