#include <iostream>
using namespace std;

class Armstrong {
private:
    int num;
public:
    Armstrong(int n) { num = n; }
    
    // Copy Constructor
    Armstrong(const Armstrong &obj) {
        num = obj.num;
    }
    
    void check() {
        int temp = num, remainder, result = 0;
        while (temp != 0) {
            remainder = temp % 10;
            result += remainder * remainder * remainder;
            temp /= 10;
        }
        if (result == num)
            cout << num << " is an Armstrong number." << endl;
        else
            cout << num << " is not an Armstrong number." << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    Armstrong obj1(n);      // Parametric constructor
    Armstrong obj2 = obj1;  // Copy constructor called
    obj2.check();
    
    return 0;
}
