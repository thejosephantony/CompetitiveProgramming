/*QQ
Write a program which prints multiplication tables in the following format:

1x1=1
1x2=2
.
.
9x8=72
9x9=81
Input
No input.

Output
1x1=1
1x2=2
.
.
9x8=72
9x9=81*/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(){
    int i = 1;

    while(i < 10){
        for(int j = 1; j <= 9; j++){
            cout << i << "x" << j << "=" << i * j << endl;
        }
        i++;
    }
    return 0;
}
