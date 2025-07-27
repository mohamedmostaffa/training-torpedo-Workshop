#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);  // Read full line including spaces

    reverse(input.begin(), input.end());  // Reverse the whole string

    cout << "Reversed sentence: " << input << endl;
    return 0;
}