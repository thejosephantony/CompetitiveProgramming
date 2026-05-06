/*Print a Chessboard
Draw a chessboard which has a height of H cm and a width of W cm. For example, the following figure shows a chessboard which has a height of 6 cm and a width of 10 cm.

#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
Note that the top left corner should be drawn by '#'.

Input
The input consists of multiple datasets. Each dataset consists of two integers H and W separated by a single space.

The input ends with two 0 (when both H and W are zero).

Output
For each dataset, print the chessboard made of '#' and '.'.

Print a blank line after each dataset.

Constraints
1 ≤ H ≤ 300
1 ≤ W ≤ 300*/


#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main(){
    int H;
    int W;

    while(true){
        cin >> H >> W;
        if(H == 0 and W == 0){
            break;
            return 0;
        }
        if((H >=1 and H <= 300) and (W >=1 and W <= 300)){
            for(int i = 1; i <= H; i++){
                for(int j = 1; j <= W; j++){
                    if((i + j) % 2 == 0){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
                cout << endl;
            }
            cout << endl;

        }
    }
    return 0;
}
