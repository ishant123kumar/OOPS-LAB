#include <iostream>
using namespace std;

class Demo {
private:
    int value;
public:
    // 1. Default Constructor
    Demo() {
        value = 0;
        cout << "Default Constructor Called. Value = " << value << endl;
    }
    
    // 2. Parameterized Constructor
    Demo(int val) {
        value = val;
        cout << "Parameterized Constructor Called. Value = " << value << endl;
    }
    
    // 3. Copy Constructor
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy Constructor Called. Value = " << value << endl;
    }
};

int main() {
    Demo obj1;        // Default
    Demo obj2(50);    // Parameterized
    Demo obj3 = obj2; // Copy
    return 0;
}
