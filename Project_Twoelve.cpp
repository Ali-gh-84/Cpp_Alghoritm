#include <iostream>
using namespace std;

//
// * this file for first projects with c++ *
// * check repate number *
//

void showrepatenumber(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Repeating elements are " << arr[i] << " ";
                break;
            } else {
                cout << "not exist repate number !";
                return;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter size : ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid Input";
        return 0;
    }
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    showrepatenumber(arr, arr_size);
    return 0;
}
