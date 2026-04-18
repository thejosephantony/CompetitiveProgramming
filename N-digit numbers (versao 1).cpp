/*
Find the number of N-digit numbers such that the sum of their digits
is equal to the product of their digits.

Also, output the smallest such number for the given N, where:
1 <= N < 10

Input:
The number N (1 <= N < 10)

Output:
Print two numbers separated by a space:
1) The quantity of such N-digit numbers
2) The smallest among them
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int soma = 0;
    int produto = 0;
    int cont = 0;
    int menor = -1;
    int N;

    cin >> N;

    if(N >= 1 && N < 10){
        switch(N){
            case 1:
                for(int i = 0; i <= 9; i++){
                    soma = i;
                    produto = i;
                    if(soma == produto){
                        cont++;
                        if(menor == -1){
                            menor = i;
                        }
                    }
                }
                cout << cont << " " << menor << endl;
                break;
            case 2:
                for(int i = 10; i <= 99; i++){
                    int unidade = i/10;
                    int dezena = i % 10;
                    soma = unidade + dezena;
                    produto = unidade * dezena;

                    if(soma == produto){
                        cont++;
                        if(menor == -1){
                            menor = i;
                        }
                    }
                }
                cout << cont << " " << menor << endl;
                break;
            case 3:
                for(int i = 100; i <= 999; i++){
                    int unidade = i % 10;
                    int dezena = (i % 100)/10;
                    int centena = i/100;

                    soma = unidade + dezena + centena;
                    produto = unidade * dezena * centena;
                    if(soma == produto){
                        cont++;
                        if(menor == -1){
                            menor = i;
                        }
                    }
                }
                cout << cont << " " << menor << endl;
                break;
            case 4:
                    for(int i = 1000; i <= 9999; i++){
                        int unidade = i % 10;
                        int dezena = (i % 100)/10;
                        int centena = (i % 1000)/100;
                        int milhar = i/1000;
                        soma = unidade + dezena + centena + milhar;
                        produto = unidade * dezena * centena * milhar;
                        if(soma == produto){
                            cont++;
                            if(menor == -1){
                                menor = i;
                            }
                        }
                    }
                        cout << cont << " " << menor << endl;
                        break;
            case 5:
                    for(int i = 10000; i <= 99999; i++){
                        int unidade = i % 10;
                        int dezena = (i % 100)/10;
                        int centena = (i % 1000)/100;
                        int milhar = (i % 10000)/1000;
                        int dez_milhar = i/10000;
                        soma = unidade + dezena + centena + milhar + dez_milhar;
                        produto = unidade * dezena * centena * milhar * dez_milhar;
                        if(soma == produto){
                            cont++;
                            if(menor == -1){
                                menor = i;
                            }
                        }
                    }
                    cout << cont << " " << menor << endl;
                    break;
            case 6:
                    for(int i = 100000; i <= 999999; i++){
                        int unidade = i % 10;
                        int dezena = (i % 100)/10;
                        int centena = (i % 1000)/100;
                        int milhar = (i % 10000)/1000;
                        int dez_milhar = (i % 100000)/10000;
                        int cem_milhar = i/100000;
                        soma = unidade + dezena + centena + milhar + dez_milhar + cem_milhar;
                        produto = unidade * dezena * centena * milhar * dez_milhar * cem_milhar;
                        if(soma == produto){
                            cont++;
                            if(menor == -1){
                                menor = i;
                            }
                        }
                    }
                    cout << cont << " " << menor << endl;
                    break;
            case 7:
                    for(int i = 1000000; i <= 9999999; i++){
                        int unidade = i % 10;
                        int dezena = (i % 100)/10;
                        int centena = (i % 1000)/100;
                        int milhar = (i % 10000)/1000;
                        int dez_milhar = (i % 100000)/10000;
                        int cem_milhar = (i % 1000000)/100000;
                        int milhao = i/1000000;
                        soma = unidade + dezena + centena + milhar + dez_milhar + cem_milhar + milhao;
                        produto = unidade * dezena * centena * milhar * dez_milhar * cem_milhar * milhao;
                        if(soma == produto){
                            cont++;
                            if(menor == -1){
                                menor = i;
                            }
                        }
                    }
                    cout << cont << " " << menor << endl;
                    break;
            case 8:
                    for(int i = 10000000; i <= 99999999; i++){
                        int unidade = i % 10;
                        int dezena = (i % 100)/10;
                        int centena = (i % 1000)/100;
                        int milhar = (i % 10000)/1000;
                        int dez_milhar = (i % 100000)/10000;
                        int cem_milhar = (i % 1000000)/100000;
                        int milhao = (i % 10000000)/1000000;
                        int dez_milhao = i/10000000;
                        soma = unidade + dezena + centena + milhar + dez_milhar + cem_milhar + milhao + dez_milhao;
                        produto = unidade * dezena * centena * milhar * dez_milhar * cem_milhar * milhao * dez_milhao;
                        if(soma == produto){
                            cont++;
                            if(menor == -1){
                                menor = i;
                            }
                        }
                    }
                    cout << cont << " " << menor << endl;
                    break;
            case 9:
                    for(int i = 100000000; i <= 999999999; i++){
                        int unidade = i % 10;
                        int dezena = (i % 100)/10;
                        int centena = (i % 1000)/100;
                        int milhar = (i % 10000)/1000;
                        int dez_milhar = (i % 100000)/10000;
                        int cem_milhar = (i % 1000000)/100000;
                        int milhao = (i % 10000000)/1000000;
                        int dez_milhao = (i % 100000000)/10000000;
                        int cem_milhao = i/100000000;
                        soma = unidade + dezena + centena + milhar + dez_milhar + cem_milhar + milhao + dez_milhao + cem_milhao;
                        produto = unidade * dezena * centena * milhar * dez_milhar * cem_milhar * milhao * dez_milhao * cem_milhao;
                        if(soma == produto){
                            cont++;
                            if(menor == -1){
                                menor = i;
                            }
                        }
                    }
                    cout << cont << " " << menor << endl;
                    break;
        }
    }
    return 0;
}

// ineficiente, roda em torno de 1 minuto para N = 9, mas funciona. força bruta mesmo, não consegui pensar em uma solução mais eficiente.