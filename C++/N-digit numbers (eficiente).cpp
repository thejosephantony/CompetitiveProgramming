#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int N;
long long cont = 0;
long long menor = -1;

// Calcula o número de permutações distintas de um vetor de dígitos
// que formam números N-dígitos válidos (primeiro dígito != 0)
// Como já excluímos 0, todas as permutações são válidas.
// fatorial(N) / (fatorial(freq[1]) * fatorial(freq[2]) * ... * fatorial(freq[9]))
long long fatorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

long long contar_permutacoes(vector<int>& digitos) {
    map<int, int> freq;
    for (int d : digitos) freq[d]++;
    long long perm = fatorial(N);
    for (auto& [d, f] : freq) perm /= fatorial(f);
    return perm;
}

// Gera combinações com repetição de dígitos 1-9 de tamanho N
// em ordem não-decrescente (para encontrar o menor facilmente)
void gerar(vector<int>& atual, int inicio, int soma, long long produto) {
    if ((int)atual.size() == N) {
        if (soma == produto) {
            cont += contar_permutacoes(atual);
            if (menor == -1) {
                // O menor número é os dígitos em ordem crescente
                long long num = 0;
                for (int d : atual) num = num * 10 + d;
                menor = num;
            }
        }
        return;
    }

    int restantes = N - (int)atual.size();

    for (int d = inicio; d <= 9; d++) {
        // Poda: produto máximo possível com os dígitos restantes é d^restantes
        // Se produto_atual * d^restantes < soma_atual + d*restantes, impossível igualar
        // (poda simples, pode ser refinada)
        atual.push_back(d);
        gerar(atual, d, soma + d, produto * d);
        atual.pop_back();
    }
}

int main() {
    cin >> N;

    if (N == 1) {
        // 0-9: todo dígito satisfaz soma == produto
        cout << 10 << " " << 0 << endl;
        return 0;
    }

    vector<int> atual;
    gerar(atual, 1, 0, 1);

    cout << cont << " " << menor << endl;
    return 0;
}