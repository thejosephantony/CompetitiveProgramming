/*
0764: Verificador de Soma (Sum Checker)

Descrição do Problema:
São fornecidos três números inteiros positivos A, B e C. Se um dos valores for igual à soma dos outros dois, imprima 1. Caso contrário, imprima 0.

Restrições:
- 1 ≤ A ≤ 100
- 1 ≤ B ≤ 100
- 1 ≤ C ≤ 100
- Todos os valores de entrada são números inteiros.

Entrada:
A entrada é fornecida no seguinte formato:
A B C

Saída:
Se um dos valores for igual à soma dos outros dois, imprima 1. Caso contrário, imprima 0.
Não imprima nada além do resultado (nem mesmo mensagens de solicitação de entrada).
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int A;
    int B;
    int C;

    cin >> A >> B >> C;
    if((A >= 1 and A <= 100) and (B >= 1 and B <= 100) and (C >= 1 and C <= 100)){
        if(A + B == C){
            cout << 1 << endl;
        }
        else if(A + C == B){
            cout << 1 << endl;
        }
        else if(B + C == A){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;

}
