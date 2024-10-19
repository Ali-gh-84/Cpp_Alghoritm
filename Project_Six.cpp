#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * average while number isnot zero number *
//

int main() {
    int number;
    int sum = 0;
    int average = 0;
    int count = 0;

    while (number != 0) {
        count++;
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    }
    average = sum / count;
    cout << "average is : " << average;
}
