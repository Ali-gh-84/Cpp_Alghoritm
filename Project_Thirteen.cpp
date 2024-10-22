#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

char table[4][4] = {{'*', '*', '*', '*'}, {'*', '*', '*', '*'}, {'*', '*', '*', '*'}, {'*', '*', '*', '*'}};
vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8};
int arr2[4][4];

// Initialize the table with random values and show them *
void initializerTable() {

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(arr.begin(), arr.end());

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr2[i][j] = arr[i * 4 + j];
        }
    }

    cout << "\t-------\t-------\t-------\t---------" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "\t";
        for (int j = 0; j < 4; j++) {
            cout << "|   " << arr2[i][j] << "   ";
        }
        cout << "|" << endl;
        cout << "\t-------\t-------\t-------\t---------" << endl;
    }

    sleep(5); // Pause for 5 seconds
    system("clear"); // Clear the screen
}

// Show the player the current table *
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

// Get player input and check the indexes *
void getInput() {

    int inputOne, inputTwo;
    cout << "Enter your first number (1-16): ";
    cin >> inputOne;
    cout << "Enter your second number (1-16): ";
    cin >> inputTwo;

    int row1 = (inputOne - 1) / 4;
    int col1 = (inputOne - 1) % 4;
    int row2 = (inputTwo - 1) / 4;
    int col2 = (inputTwo - 1) % 4;

    // Show selected values *
    cout << "First selected value: " << arr2[row1][col1] << endl;
    cout << "Second selected value: " << arr2[row2][col2] << endl;

    // Check if the selected values match *
    if (arr2[row1][col1] == arr2[row2][col2]) {
        table[row1][col1] = '0' + arr2[row1][col1];
        table[row2][col2] = '0' + arr2[row2][col2];
        cout << "Match found!" << endl;
    } else {
        cout << "Not a match. Try again." << endl;
    }
    sleep(2); // Pause for 5 seconds
    system("clear"); // Clear the screen
}

// Check if the game board is full
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

int main() {
    initializerTable();
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
