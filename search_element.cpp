#include <iostream>
#include <algorithm> 
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; 
}

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << "\nEnter element to search: ";
    cin >> key;

    int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index (sorted array): " << index << endl;
    else
        cout << "Element not found.\n";

    return 0;
}
