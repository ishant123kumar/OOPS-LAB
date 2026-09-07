#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    // Loop to add numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of all numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}
