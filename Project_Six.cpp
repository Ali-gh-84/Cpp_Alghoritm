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

    do {
        count++;
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    } while (number > 0);
    average = sum / (count - 1);
    cout << "average is : " << average;
}
