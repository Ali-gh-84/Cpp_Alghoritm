#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * odd or even number *
//

int main() {
    int number;

    cout << "enter a number : " << endl;
    cin >> number;

    if (number <= 0) {
        cout << "number must be greater than zero" << endl;
        return 0;
    }

    if (number % 2 == 0) {
        cout << "number is even" << endl;
    } else {
        cout << "number is odd" << endl;
    }
    return 0;
}
