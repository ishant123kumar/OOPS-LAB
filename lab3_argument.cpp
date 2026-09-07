#include <iostream>
using namespace std;

// Function that takes an argument and returns the reversed number
int reverseNumber(int num) {
    int reversedNum = 0, remainder;
    while (num > 0) {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int number;
    cout << "Enter a number to reverse: ";
    cin >> number;

    // Calling the function by passing the argument
    int result = reverseNumber(number);

    cout << "Reversed number: " << result << endl;
    return 0;
}
