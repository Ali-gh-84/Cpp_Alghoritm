#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * fibonachi series *
//

int main() {
    int number1 = 0;
    int number2 = 1;
    int sum = 0;

    while (number1 <= 100) {
        cout << number1 << endl;
        sum = number1 + number2;
        number1 = number2;
        number2 = sum;
    }
    return 0;
}
