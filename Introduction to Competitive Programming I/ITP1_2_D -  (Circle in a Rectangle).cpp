/*Circle in a Rectangle
Write a program which reads a rectangle and a circle, and determines whether the circle is arranged inside the rectangle. As shown in the following figures, the upper right coordinate (W,H) of the rectangle and the central coordinate (x,y) and radius r of the circle are given.
Circle inside a rectangle

Input
Five integers W, H, x, y and r separated by a single space are given in a line.

Output
Print "Yes" if the circle is placed inside the rectangle, otherwise "No" in a line.

Constraints
−100≤x,y≤100
*/


#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main (){
    int W;
    int H;
    int x;
    int y;
    int r;
    
    cin >> W >> H >> x >> y >> r;
    
    if((W > 0 and H > 0) and (x >= -100 and x <= 100) and (y >= -100 and y <= 100)){
        if((x - r >= 0) and (x + r <= W) and (y - r >= 0) and (y + r <= H)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}


