#include <iostream>
using namespace std;

int main() {
    int num, remainder;
    int reversedNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // We store the original number since num will be modified
    int originalNum = num; 

    // Logic to reverse the digits using a do-while loop
    do {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    } while (num > 0);

    cout << "The reverse of " << originalNum << " is: " << reversedNum << endl;
    return 0;
}
