/*Dado um inteiro N, imprima de 1 até N. Se o número for divisível por 3, imprima "Fizz".
Se for divisível por 5, imprima "Buzz". Se for divisível por ambos, imprima "FizzBuzz".*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int FizzBuzz(int N){

    for(int i = 0; i <= N; i++){
        if((i % 5 == 0) && (i % 3 == 0)){
            cout << "FizzBuzz" << endl;
        }
        else if(i % 5 == 0){
            cout << "Buzz" << endl;
        }
        else if(i % 3 == 0){
            cout << "Fizz" << endl;
        }
        else{
            cout << i << endl;
        }
    }
    return 0;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Insira o número: ";
    cin >> num;

    if(num < 1){
        cout << "Número inválido." << endl;
    }
    else{
        FizzBuzz(num);
    }
    return 0;
}
