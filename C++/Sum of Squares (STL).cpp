/* Find the sum of the squares of two integers.
 Input
    Two integers a and b are given. Each of them does not exceed 10^9 in absolute value.
Output
    Print the value of the expression a^2+b^2
*/


#include <iostream>
using namespace std;

long long res, a, b;

int main(void)
{
  cin >> a >> b;
  res = a * a + b * b;
  cout << res << endl;
  return 0;
}