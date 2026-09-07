#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], revArr[n];

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Copying elements in reverse order
    for (int i = 0; i < n; i++) {
        revArr[i] = arr[n - 1 - i];
    }

    cout << "Reversed array elements are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << revArr[i] << " ";
    }
    cout << endl;

    return 0;
}
