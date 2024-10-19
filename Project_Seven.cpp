#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// *  absolute value number *
//

int main() {
    int number;
    int abs;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        abs = number * -1;
        cout << "absolute number is : " << abs << endl;
    } else {
        cout << "number is positive " << endl;
    }
    return 0;
}
