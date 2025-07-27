#include <iostream>
#include <string>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations
void generatePermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(str[left], str[i]);                           // Fix character at index 'left'
        generatePermutations(str, left + 1, right);        // Recur for rest
        swap(str[left], str[i]);                           // Backtrack
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "\nPermutations of \"" << input << "\":" << endl;
    generatePermutations(input, 0, input.length() - 1);

    return 0;
}