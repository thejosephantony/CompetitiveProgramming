// Na última aula de matemática, Rafael, Beto e Carlos aprenderam algumas novas funções matemáticas. Cada um deles se identificou com uma função em especial, e resolveram competir para ver quem tinha a função de maior resultado.

// A função que Rafael escolheu é r(x, y) = (3x)² + y².

// Já Beto escolheu a função b(x, y) = 2(x²) + (5y)².

// Carlos, por sua vez, escolheu a função c(x, y) = -100x + y³.

// Dados os valores x e y, diga quem escolheu a função com o maior resultado.

// Entrada
// A primeira linha de entrada contém um inteiro N que determina a quantidade de casos de teste. Cada caso de teste consiste em dois inteiros x e y (1 ≤ x, y ≤ 100), indicando as variáveis a serem inseridas na função.

// Saída
// Para cada caso de teste imprima uma linha, contendo uma frase, indicando quem ganhou a competição. Por exemplo, se Rafael ganhar a competição, imprima “Rafael ganhou”. Assuma que nunca haverá empates.

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int x;
    int y;
    int N;
    int fRafael;
    int fBeto;
    int fCarlos;
    
    
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> x >> y;
        
        fRafael = pow(3*x, 2) + pow(y, 2);
        fBeto = 2 * pow(x,2) + pow(5*y, 2);
        fCarlos = -100*x + pow(y,3);
        
        if(fRafael > fBeto && fRafael > fCarlos){
            cout << "Rafael ganhou" << endl;
        }
        else if(fBeto > fRafael && fBeto > fCarlos){
            cout << "Beto ganhou" << endl;
        }
        else{
            cout << "Carlos ganhou" << endl;
        }
    }
}