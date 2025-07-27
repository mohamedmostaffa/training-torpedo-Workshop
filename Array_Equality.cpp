#include <iostream>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

int main() {
    int size;

    cout << "Enter size of arrays: ";
    cin >> size;

    int arr1[size], arr2[size];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < size; i++)
        cin >> arr1[i];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < size; i++)
        cin >> arr2[i];

    if (areArraysEqual(arr1, arr2, size))
        cout << "Arrays are equal." << endl;
    else
        cout << "Arrays are not equal." << endl;

    return 0;
}