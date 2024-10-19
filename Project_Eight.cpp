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

    bool again = true;
    while (again) {
        if (number >= 0) {
            cout << "Enter a number: ";
            cin >> number;
            count++;
            sum += number;
        } else {
            again = false;
            sum += 1;
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
