// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 90 x 91.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::string;

bool isPalindrome(int n){
    string s = std::to_string(n);
    string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());
    return s == reversed_s;
}

int main(){
    int largest_palindrome = 0;

    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            int product = i * j;
            if(isPalindrome(product) && product > largest_palindrome){
                largest_palindrome = product;
            }
        }
    }
    cout << "O maior palíndromo feito a partir do produto de dois números de 3 dígitos é: " << largest_palindrome << endl;
    return 0;
}