/*Determine the level of educational achievements of a pupil (initial, average, sufficient, high) based on the given grade (1 to 12).

Input
One integer — the pupil's grade.

Output
Print Initial for the initial level (grade from 1 to 3), Average for the average level (grade from 4 to 6), Sufficient for the sufficient level (grade from 7 to 9), and High for the high level (grade from 10 to 12).*/
/*Determine the level of educational achievements of a pupil (initial, average, sufficient, high) based on the given grade (1 to 12).

Input
One integer — the pupil's grade.

Output
Print Initial for the initial level (grade from 1 to 3), Average for the average level (grade from 4 to 6), Sufficient for the sufficient level (grade from 7 to 9), and High for the high level (grade from 10 to 12).*/

#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int nota;

    cin >> nota;
    if(nota >= 1 && nota <= 12){
        switch(nota){
            case 1:
            case 2:
            case 3:
                cout << "Initial" << endl;
                break;
            case 4:
            case 5:
            case 6:
                cout << "Average" << endl;
                break;
            case 7:
            case 8:
            case 9:
                cout << "Sufficient" << endl;
                break;
            case 10:
            case 11:
            case 12:
                cout << "High" << endl;
                break;
        }
    }
    return 0;
}
