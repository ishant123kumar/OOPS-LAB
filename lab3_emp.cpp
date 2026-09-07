#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, designation;
    int code, experience, age;

    // Reading information from keyboard
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Employee Code: ";
    cin >> code;
    cin.ignore(); // Clear newline buffer
    cout << "Enter Designation: ";
    getline(cin, designation);
    cout << "Enter Years of Experience: ";
    cin >> experience;
    cout << "Enter Age: ";
    cin >> age;

    // Displaying the information
    cout << "\n--- Employee Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Code: " << code << endl;
    cout << "Designation: " << designation << endl;
    cout << "Years of Experience: " << experience << endl;
    cout << "Age: " << age << endl;

    return 0;
}
