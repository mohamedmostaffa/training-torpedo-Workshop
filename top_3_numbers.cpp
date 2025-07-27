#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printTopThree(vector<int> numbers) {
    if (numbers.size() < 3) {
        cout << "Need at least 3 numbers!" << endl;
        return;
    }

    sort(numbers.begin(), numbers.end(), greater<int>());

    cout << "Top 3 highest numbers are: ";
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    printTopThree(nums);

    return 0;
}
