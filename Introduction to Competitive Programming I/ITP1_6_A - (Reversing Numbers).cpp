/*Reversing Numbers

Write a program which reads a sequence and prints it in the reverse order.

Input
The input is given in the following format:

n
a1 a2 . . . an
n is the size of the sequence and ai is the ith element of the sequence.

Output
Print the reversed sequence in a line. Print a single space character between adjacent elements (Note that your program should not put a space character after the last element).

Constraints
n ≤ 100
0 ≤ ai < 1000*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;
    int a1;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> a1;
        arr[i] = a1;
    }

    for(int i = n - 1; i >= 0; i--){
        cout << arr[i];
        if(i != 0){
            cout << " ";
        }
    }
    cout << endl;
    return 0;

}
