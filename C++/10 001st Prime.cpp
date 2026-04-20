/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int count = 0; 
    int num = 1; 

    while (count < 10001) {
        num++;
        bool isPrime = true;

        for (int i = 2; i <= std::sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    cout << "The 10001st prime number is: " << num << endl;

    return 0;
}