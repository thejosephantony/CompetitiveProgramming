// The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the number 600851475143?

#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main(){
    long long int n = 600851475143;
    long long int maior = 0;

    for(long long int i = 2; i <= n; i++){
        if(n % i == 0){
            n = n / i;
            if(i > maior){
                maior = i;
            }
        }
    }
    cout << "O maior fator primo de 600851475143 é: " << maior << endl;
    return 0;
}