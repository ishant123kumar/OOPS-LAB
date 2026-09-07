#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;
public:
    // Default constructor tracks input and generation
    Fibonacci() {
        cout << "Enter the number of terms: ";
        cin >> n;
        
        int t1 = 0, t2 = 1, nextTerm = 0;
        cout << "Fibonacci Series: ";
        for (int i = 1; i <= n; ++i) {
            if(i == 1) {
                cout << t1 << " ";
                continue;
            }
            if(i == 2) {
                cout << t2 << " ";
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << " ";
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fib; // Triggers constructor automatically
    return 0;
}
