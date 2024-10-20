#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * average and check the pass or fail the exam *
//

int main() {
    int number;
    int sum = 0;
    int average = 0;
    int count = -1;

    while (true) {
            cout << "Enter a number: ";
            cin >> number;
            count++;
        if (number >= 0) {
            sum += number;
        } else {
            break;
        }
    }
    average = sum / count;
    cout << "average is : " << average << endl;
    if (average > 12) {
        cout << "you passed the exam ! " << endl;
    }else {
        cout << "you failed the exam ! " << endl;
    }
    return 0;
}
