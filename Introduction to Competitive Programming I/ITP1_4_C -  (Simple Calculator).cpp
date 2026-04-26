/*Simple Calculator
Write a program which reads two integers a, b and an operator op, and then prints the value of a op b.

The operator op is '+', '-', '*' or '/' (sum, difference, product or quotient). The division should truncate any fractional part.

Input
The input consists of multiple datasets. Each dataset is given in the following format.

a op b
The input ends with a dataset where op = '?'. Your program should not process for this dataset.

Output
For each dataset, print the value in a line.

Constraints
0 ≤ a, b ≤ 20000
No divisions by zero are given.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    char op;
    int a;
    int b;
    int sum;
    int sub;
    int mult;
    int div;

    while(true){
    cin >> a >> op >> b;
    if(op == '?'){
        break;
        return 0;
    }
    if((a >= 0 and a <= 20000) and (b >= 0 and b <= 20000)){
        switch(op){
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a/b << endl;
                break;
            }
        }
    }
    return 0;
}
