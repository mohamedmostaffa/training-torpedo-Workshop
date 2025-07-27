#include <iostream>
#include <string>
using namespace std;

string replaceDogWithCat(string text) {
    string from = "dog";
    string to = "cat";

    size_t pos = 0;
    while ((pos = text.find(from, pos)) != string::npos) {
        text.replace(pos, from.length(), to);
        pos += to.length(); 
    }

    return text;
}

int main() {
    string input;

    cout << "Enter a sentence: ";
    getline(cin, input);

    string result = replaceDogWithCat(input);
    cout << "Modified sentence: " << result << endl;

    return 0;
}