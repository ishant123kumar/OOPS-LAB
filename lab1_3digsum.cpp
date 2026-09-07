#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Mathematical logic to split digits
    sum += num % 10;       // Gets the last digit
    num = num / 10;        // Removes the last digit
    
    sum += num % 10;       // Gets the middle digit
    num = num / 10;        // Removes the middle digit
    
    sum += num;            // The remaining number is the first digit

    cout << "Sum of all digits: " << sum << endl;

    return 0;
}
