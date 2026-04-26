/*Sorting Three Numbers
Write a program which reads three integers, and prints them in ascending order.

Input
Three integers separated by a single space are given in a line.

Output
Print the given integers in ascending order in a line. Put a single space between two integers.

Constraints
1 ≤ the three integers ≤ 10000*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int A;
    int B;
    int C;
    int maior;
    int menor;
    int medio;
    
    cin >> A >> B >> C;
    if((A >= 1 and A <= 10000) and (B >= 1 and B <= 10000) and (C >= 1 and C <= 10000)){
        if(A > B and A > C){
            maior = A;
        } else if(B > A and B > C){
            maior = B;
        } else {
            maior = C;
        }
        
        if(A < B and A < C){
            menor = A;
        } else if(B < A and B < C){
            menor = B;
        } else {
            menor = C;
        }
        
        medio = (A + B + C) - (maior + menor);
        
        cout << menor << " " << medio << " " << maior << endl;
        
    }
    
}