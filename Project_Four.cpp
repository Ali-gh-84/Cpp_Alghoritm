#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * Factorial number *
//

int main() {
    int number;
    int factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        cout << "number is zero" << endl;
        return 0;
    }
    if (number < 0) {
        cout << "number is negative" << endl;
        return 0;
    }

    factorial *= number;

    while (number > 1) {
        number -= 1;
        factorial *= number;
    }
    cout << "factorial number is : " << factorial << endl;
}
