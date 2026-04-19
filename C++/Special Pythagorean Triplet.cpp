// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// For example, 3² + 4² = 9 + 16 = 25 = 5².

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    for(int a = 1; a < 1000; a++){
        for(int b = a + 1; b < 1000; b++){
            int c = 1000 - a - b;
            if(a*a + b*b == c*c){
                cout << "a: " << a << " b: " << b << " c: " << c << endl;
                cout << "Produto abc: " << a * b * c << endl;
                return 0;
            }
        }
    }
}