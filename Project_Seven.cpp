#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// *  absolute value number *
//

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        number *= -1;

    }
    cout << "absolute number is : " << number << endl;
    return 0;
}
