#include <iostream>
using namespace std;

int main() {
    int num, binary[32], i = 0;
    cout << "Enter a decimal number: ";
    cin >> num;

    // Store remainders in array
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print array in reverse order
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}
