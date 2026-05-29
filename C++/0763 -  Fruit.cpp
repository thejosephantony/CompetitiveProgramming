/*
0763: Frutas

Descrição do Problema:
Temos X maçãs, Y tangerinas e 3 bananas. Calcule o número total de maçãs, tangerinas e bananas.

Restrições:
- 0 ≤ X ≤ 100
- 0 ≤ Y ≤ 100
- Todos os valores de entrada são números inteiros.

Entrada:
A entrada é fornecida no seguinte formato:
X Y

Saída:
Imprima o número total de maçãs, tangerinas e bananas, sem a unidade ("peças").
Não imprima nada além do resultado (nem mesmo mensagens de solicitação de entrada).

*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int X;
    int Y;
    int Z = 3;

    cin >> X >> Y;
    if((X >= 0 and X <= 100) and (Y >= 0 and Y <= 100)){

    int total = X + Y + Z;
    cout << total << endl;

    }
    return 0;
}
