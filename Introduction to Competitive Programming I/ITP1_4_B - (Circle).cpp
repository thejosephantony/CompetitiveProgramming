/*English / Japanese
Circle
Write a program which calculates the area and circumference of a circle for given radius r.

Input
A real number r is given.

Output
Print the area and circumference of the circle in a line. Put a single space between them. The output should not contain an absolute error greater than 10-5.

Constraints
0 < r < 10000*/

#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main(){
    long double area;
    long double circumference;
    long double r;

    cout << fixed << setprecision(5);

    cin >> r;
    if(r > 0 and r < 10000){
        area = M_PI * pow(r,2);
        circumference = 2 * M_PI * r;
        cout << area << " " << circumference;
    }
    return 0;

}
