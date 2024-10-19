#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * count of digit number *
//

int main() {
    int count = 0;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        cout << "number is 0 !" << endl;
        return 0;
    }

    if (number < 0) {
        cout << "number is negative !" << endl;
        return 0;
    }

    while (number > 0) {
        count++;
        number = number / 10;
    }
    cout << "digit of number is : " << count << endl;
    return 0;
}
