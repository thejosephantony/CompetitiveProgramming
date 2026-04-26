/*Swapping Two Numbers
Write a program which reads two integers and , and prints them in ascending order. xy

Input
The input consists of multiple datasets. Each dataset consists of two integers and separated by a single space. xy

The input ends with two 0 (when both and are zero). Your program should not process for these terminal symbols. xy

Output
For each dataset, print and in ascending order in a line. Put a single space between and y. xyx

Constraints
0 ≤ , ≤ 10000xy
the number of datasets ≤ 3000*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int x;
    int y;
    int i = 1;
    int large;
    int small;

    while(true){
        cin >> x >> y;
        if(x == 0 and y == 0){
            break;
            return 0;
        }
        if (i > 3000){
            break;
            return 0;
        }
        if((x >= 0 and x <= 10000) and (y >= 0 and y <= 10000)){
            if(x >= y){
                cout << y << " " << x << endl;
            }
            else{
                cout << x << " " << y << endl;
            }
        }
        i++;
    }
    return 0;
}
