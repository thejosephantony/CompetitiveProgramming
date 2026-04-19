#include <iostream>

using namespace std;

int N;
long long cont = 0;
long long menor = -1;

void dfs(int pos, int soma, int produto, int num) {
    if (pos == N) {
        if (soma == produto) {
            cont++;
            if (menor == -1) menor = num;
        }
        return;
    }

    for (int d = 0; d <= 9; d++) {

        if (pos == 0 && d == 0) continue; // sem zero à esquerda

        int newSoma = soma + d;

        int newProduto;
        if (pos == 0) newProduto = d;
        else newProduto = produto * d;

        // PODA ESSENCIAL:
        if (newProduto > newSoma && newSoma != 0) continue;

        dfs(pos + 1, newSoma, newProduto, num * 10 + d);
    }
}

int main() {
    cin >> N;

    if (N == 1) {
        cout << 10 << " " << 0 << endl;
        return 0;
    }

    dfs(0, 0, 1, 0);

    cout << cont << " " << menor << endl;

    return 0;
}