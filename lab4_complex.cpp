#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    // Declaration of friend function
    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, c3;
    cout << "For first complex number:" << endl;
    c1.input();
    cout << "For second complex number:" << endl;
    c2.input();
    
    c3 = add(c1, c2);
    cout << "Sum = ";
    c3.display();
    return 0;
}
