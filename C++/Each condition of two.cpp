/*For the given integer n print "YES", if each of the following conditions holds and "NO" otherwise.

number n is divisible by 3;

number n is even and two-digit.

Input
One integer n.

Output
Print "YES" or "NO" depending on conditions.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;

    cin >> n;

    if((n % 3 == 0) and (n % 2 == 0 and ((n >= 10 and n <= 99) || (n <= -10 and n >= -99)))){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;

}
