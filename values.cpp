/*Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
int main() {

    cout << fixed << setprecision(9);
     int a;
     long b;
     char c;
     float d;
     double e;

     cin >> a;
     cin >> b;
     cin >> c;
     cin >> d;
     cin >> e;
     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
     cout << d << endl;
     cout << e << endl;

    return 0;
}


//Sample Input

/*3 12345678912345 a 334.23 14049.30493

Sample Output
3
12345678912345
a
334.230
14049.304930000

*/
