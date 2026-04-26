/*Watch
Write a program which reads an integer S[second] and converts it to h:m:s
where h, m, s denote hours, minutes (less than 60) and seconds (less than 60) respectively.

Input
An integer S is given in a line.

Output
Print h, m and separated by ':'. You do not need to put '0' for a value, which consists of a digit.
Constraints
0≤S≤86400*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int S;
    int H;
    int M;

    cin >> S;
    if(S >= 0 and S <= 86400){
        H = S/3600;
        M = (S % 3600)/60;
        S = (S % 3600) % 60;
        cout << H << ":" << M << ":" << S << endl;
    }
    return 0;

}
