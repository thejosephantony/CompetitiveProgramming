/*Print Many Hello World
Write a program which prints 1000 "Hello World".

Input
There is no input for this problem.

Output
The output consists of 1000 lines. Print "Hello World" in each line.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    for(int i = 1; i <= 1000; i++){
        cout << "Hello World" << endl;
    }
    return 0;
}
