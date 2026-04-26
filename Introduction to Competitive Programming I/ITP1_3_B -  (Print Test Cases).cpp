/*Print Test Cases
In the online judge system, a judge file may include multiple datasets to check whether the submitted program outputs a correct answer for each test case. This task is to practice solving a problem with multiple datasets.

Write a program which reads an integer x and print it as is. Note that multiple datasets are given for this problem.

Input
The input consists of multiple datasets. Each dataset consists of an integer x in a line.

The input ends with an integer 0. You program should not process (print) for this terminal symbol.

Output
For each dataset, print x in the following format:

Case i: x
where i is the case number which starts with 1. Put a single space between "Case" and i. Also, put a single space between ':' and x.

Constraints
1 ≤ x ≤ 10000
The number of datasets ≤ 10000*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N;
    int i = 1;
    while(true){
        cin >> N;
        if(N == 0){
            break;
            return 0;
        }
        if(N >= 1 and N <= 10000){
            cout << "Case " << i << ": " << N << endl;
        }
        i++;
    }
}
