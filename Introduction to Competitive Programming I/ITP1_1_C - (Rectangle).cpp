/*Rectangle
Write a program which calculates the area and perimeter of a given rectangle.

Input
The length and breadth of the rectangle are given in a line separated by a single space. ab

Output
Print the area and perimeter of the rectangle in a line. The two integers should be separated by a single space.

Constraints
1 ≤ , ≤ 100ab*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int a;
    int b;
    int area;
    int perimeter;

    cin >> a >> b;
    if((a >= 1 and a <= 100) and (b >= 1 and b <= 100)){
        area = a * b;
        perimeter = 2 * a + 2 * b;
        cout << area << " " << perimeter << endl;
    }
    return 0;

}
