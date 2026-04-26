/*Small, Large, or Equal
Write a program which prints small/large/equal relation of given two integers a and b.

Input
Two integers a and b separated by a single space are given in a line.

Output
For given two integers a and b, print*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int a;
    int b;

    cin >> a >> b;

    if(a > b){
        cout << "a > b" << endl;
    }
    else if(b > a){
        cout << "a < b" << endl;
    }
    else{
        cout << "a == b" << endl;
    }
    return 0;

}
