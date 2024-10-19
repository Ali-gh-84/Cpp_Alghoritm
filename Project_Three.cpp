#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * prime numbers *
//

bool isPrime(int number) {

    if (number <= 1) {
        cout << number << " is not prime " << endl;
        return false;
    }
    if (number == 2) {
        cout << number << " is prime " << endl;
        return true;
    }

    for (int i = 2; i <= i * i; i++) {
        if (number % i == 0) {
            cout << number << " is not prime" << endl;
            return false;
        }
        cout << number << " is prime" << endl;
        return true;
    }
}

    int main(){

        int number;

        cout << "enter a number : ";
        cin >> number;

        cout << isPrime(number) << endl;
    }
