#include <iostream>
#include <chrono>
#include <string>

using namespace std;

//
// * this file for first projects with c++ *
// * tic tac toe game *
//

char table[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int nobat = 1;
string player1;
string player2;

void getnameplayer() {
    cout << "enter name of player 1 :" << endl;
    getline(cin, player1);
    cout << "enter name of player 2 :" << endl;
    getline(cin, player2);
}

char getcharofround() {
    return (nobat % 2 == 0) ? 'X' : 'O';
}

void printtable() {
    cout << endl;
    cout << "player 1 : " << player1 << "        " << "player 2 : " << player2 << endl;

    cout << "\t-------\t-------\t-------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t";
        for (int j = 0; j < 3; j++) {
            cout << "|   " << table[i * 3 + j] << "   ";
        }
        cout << "|" << endl;
        cout << "\t-------\t-------\t-------" << endl;
    }
}

string show_win() {
    return (getcharofround() == 'X') ? player1 : player2;
}

void getinput() {
    char input;
    bool valid = false;

    while (!valid) {
        cout << "enter a num amoung 1-9 " << show_win() << " : ";
        cin >> input;

        if (input >= '1' && input <= '9' && table[input - '1'] != 'X' && table[input - '1'] != 'O') {
            table[input - '1'] = getcharofround();
            nobat++;
            valid = true;
        } else {
            cout << "Invalid input, try again." << endl;
        }
    }
}

bool isfull() {
    for (char c : table) {
        if (c != 'X' && c != 'O') return false;
    }
    return true;
}

bool iswin() {
    return (table[0] == table[1] && table[1] == table[2]) ||
           (table[3] == table[4] && table[4] == table[5]) ||
           (table[6] == table[7] && table[7] == table[8]) ||
           (table[0] == table[3] && table[3] == table[6]) ||
           (table[1] == table[4] && table[4] == table[7]) ||
           (table[2] == table[5] && table[5] == table[8]) ||
           (table[0] == table[4] && table[4] == table[8]) ||
           (table[2] == table[4] && table[4] == table[6]);
}

bool isnotend() {
    return !(isfull() || iswin());
}

void whowin() {
    if (isfull()) {
        cout << "Nooo players, it's a draw :(" << endl;
    } else {
        cout << "Yessss! " << show_win() << " is the winner! :)" << endl;
    }
}

int main() {
    getnameplayer();
    while (isnotend()) {
        printtable();
        getinput();
    }
    printtable();
    whowin();
    return 0;
}