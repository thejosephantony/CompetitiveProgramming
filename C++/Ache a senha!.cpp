/*Descrição do problema

Para promover a integração entre os novos alunos de um Instituto Federal, um desafio foi proposto: em um campo aberto, 4 papéis foram espalhados. Nestes papéis, cada um tinha uma letra e um número. A letra correspondia a ordem dos dígitos que formavam a senha de um cadeado, que trancava uma caixa cheia de prêmios. Ou seja, o papel com a letra A tinha o primeiro dígito da senha, com a letra B tinha o segundo, e assim sucessivamente. Agora eles contam com você para desenvolver um código que resolva este problema com mais rapidez.

Entrada
A entrada consiste em vários casos de teste. Cada caso contém quatro valores inteiros A, B, C e D (0 ≤ N ≤ 9), representando os dígitos da senha, já na ordem correta.

Saída
Para cada caso de teste, imprima a senha devidamente montada.*/

#include <bits/stdc++.h>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    int x[4];
    cin >> x[0] >> x[1] >> x[2] >> x[3];
        if((x[0] >= 0 and x[0] <= 9) and (x[1] >= 0 and x[1] <= 9) and (x[2] >= 0 and x[2] <= 9) and (x[3] >= 0 and x[3] <= 9)){
            cout << x[0] << x[1] << x[2] << x[3] << endl;
        }
    return 0;
}