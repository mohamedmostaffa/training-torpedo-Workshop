#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "\nBefore swapping:\n";
    cout << "number1 = " << number1 << "\nnumber2 = " << number2 << endl;

    swapNumbers(number1, number2);

    cout << "\nAfter swapping:\n";
    cout << "number1 = " << number1 << "\nnumber2 = " << number2 << endl;

    return 0;
}