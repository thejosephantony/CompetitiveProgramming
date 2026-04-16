// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int n = 20;
    int smallest_multiple = n;

    while(true){
        bool divisible = true;
        for(int i = 1; i <= n; i++){
            if(smallest_multiple % i != 0){
                divisible = false;
                break;
            }
        }
        if(divisible){
            break;
        }
        smallest_multiple += n;
    }
    cout << "O menor número positivo que é divisível por todos os números de 1 a 20 é: " << smallest_multiple << endl;
    return 0;
}