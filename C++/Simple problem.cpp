/*Simple problem
CPU usage time limit is 1 second
Runtime memory usage limit is 128 megabytes
Write a program that reads a two-digit integer and outputs both digits separated by a space.

Input
A single integer n where 10≤n≤99.

Output
Output the two digits of the number, separated by a space.*/

#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main(){
    int number;
    int decimal;
    int unit;

    cin >> number;

    unit = number % 10;
    decimal = number/10;
    cout << decimal << " " << unit << endl;
    return 0;
}

/*1 ms
1 ms
0.95 MB*/

/*Test suite #1
Accepted
100/100
1 ms
0.95 MB*/
