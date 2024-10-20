#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * sum , minus , multiple , division two number *
//

void sumfunction(int number1 ,int number2) {
    cout << "enter two number : " << endl;
    cin >> number1 >> number2;
    cout << "The Sum is " << number1 + number2 << endl;
}

void minusfunction(int number1 , int number2) {
    cout << "enter two number : " << endl;
    cin >> number1 >> number2;
    cout << "The minus is " << number1 - number2 << endl;

}

void multiplefunction(int number1 , int number2) {
    cout << "enter two number : " << endl;
    cin >> number1 >> number2;
    cout << "The multiple is " << number1 * number2 << endl;
}

void divisionfunction(int number1 , int number2) {
    cout << "enter two number : " << endl;
    cin >> number1 >> number2;
    cout << "The division is " << number1 / number2 << endl;
}

int main() {

    int number1, number2;
    int option;
        do{
        cout << "1) sum numbers  "
                "2) minus numbers  "
                "3) multiple numbers  "
                "4) remaining numbers  "
                "5) exit";

        cout << endl << "Enter an Option : ";
        cin >> option;

        switch (option) {
            case 1:
                sumfunction(number1, number2);
                break;
            case 2:
                minusfunction(number1, number2);
                break;
            case 3:
                multiplefunction(number1, number2);
                break;
            case 4:
                divisionfunction(number1, number2);
                break;
            case 5:
                cout << "Thank you for using our program!" << endl;
                break;
            default:
                cout << "Invalid Option";
                break;
        }
        }while(option != 5);
    return 0;

    }

