#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int carry = 0;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        carry = sum / 2;
        result += (sum % 2) + '0';
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string bin1, bin2;
    cout << "Enter first binary string: ";
    cin >> bin1;

    cout << "Enter second binary string: ";
    cin >> bin2;

    string sum = addBinary(bin1, bin2);
    cout << "Sum: " << sum << endl;

    return 0;
}
