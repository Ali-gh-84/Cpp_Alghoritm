#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>

using namespace std;

//
// * this file for first projects with c++ *
// * guess the number *
//


// for initialization index home *
int arr[4][4] = {{1,5,8,6},{3,4,2,1},{2,5,6,8},{7,4,7,3}};  // {{(0,0),2,3,(0,3)},{(1,0),6,7,(1,3)},{(2,0),10,11,(2,3)},{(3,0),14,15,(3,3)}}
char table [4][4] = {{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'}};


// for show main table *
void showMainTable() {

    cout << "\t-------\t-------\t-------\t---------" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "\t";
        for (int j = 0; j < 4; j++) {
            cout << "|   " << arr[i][j] << "   ";
        }
        cout << "|" << endl;
        cout << "\t-------\t-------\t-------\t---------" << endl;
    }

    // for clear console after 5 seconds *
    sleep(5);
    system("clear");

}

// for show table without number to player *
void showPlayerTable() {

    cout << " \t-------\t-------\t-------\t--------" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "\t";
        for (int j = 0; j < 4; j++) {
            cout << "|   " << table[i][j] << "   ";
        }
        cout << "|" << endl;
        cout << " \t-------\t-------\t-------\t---------" << endl;
    }
}

// for get two number as player and Placing numbers in houses *
void getInput() {

    int inputone;
    int inputtwo;

    while (true) {

        cout << "Enter your first home between 1-16 : ";
        cin >> inputone;
        cout << "Enter your second home between 1-16 : ";
        cin >> inputtwo;
        cout << endl;

        if (inputone >= 1 && inputone <= 16 && (inputone == 1 && inputtwo == 8) || (inputone == 8 && inputtwo == 1)) {
            table[0][0] = '1';
            table[1][3] = '1';
        }
        else if (inputone >= 1 && inputone <= 16 && (inputone == 7 && inputtwo == 9) || (inputone == 9 && inputtwo == 7)) {
            table[1][2] = '2';
            table[2][0] = '2';
        }
        else if (inputone >= 1 && inputone <= 16 && (inputone == 5 && inputtwo == 16) || (inputone == 16 && inputtwo == 5)) {
            table[1][0] = '3';
            table[3][3] = '3';
        }
        else if (inputone >= 1 && inputone <= 16 && (inputone == 6 && inputtwo == 14) || (inputone == 14 && inputtwo == 6)) {
            table[1][1] = '4';
            table[3][1] = '4';
        }
        else if (inputone >= 1 && inputone <= 16 && (inputone == 2 && inputtwo == 10) || (inputone == 10 && inputtwo == 2)) {
            table[0][1] = '5';
            table[2][1] = '5';
        }
        else if (inputone >= 1 && inputone <= 16 && (inputone == 4 && inputtwo == 11) || (inputone == 11 && inputtwo == 4)) {
            table[0][3] = '6';
            table[2][2] = '6';
        }
        else if (inputone >= 1 && inputone <= 16 && (inputone == 13 && inputtwo == 15) || (inputone == 15 && inputtwo == 13)) {
            table[3][0] = '7';
            table[3][2] = '7';
        }
        else if (inputone >= 1 && inputone <= 16 && (inputone == 3 && inputtwo == 12) || (inputone == 12 && inputtwo == 3)) {
            table[0][2] = '8';
            table[2][3] = '8';
        }else {
            cout << "Inputs are not Equal Value!" << endl;
        }
        break;
    }
}

// for check home to full game *
bool isFull() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (table[i][j] == '*') {
                return false;
            }
        }
    }
    return true;
}


int main(){

    showMainTable();
    while (true) {
        showPlayerTable();
        getInput();
        if (isFull()) {
            showPlayerTable();
            cout << "You Win!" << endl;
            break;
        }
    }
    return 0;
}
