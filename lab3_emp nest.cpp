#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int code;
    string designation;

    // Nested Class
    class Salary {
    public:
        double basicPay, ta, da, hra, netPay;

        void calculateSalary(double bp) {
            basicPay = bp;
            ta = 0.10 * basicPay;  // 10% TA
            da = 0.12 * basicPay;  // 12% DA
            hra = 0.20 * basicPay; // 20% HRA
            netPay = basicPay + ta + da + hra;
        }
    };

    Salary sal; // Object of nested class

public:
    void inputData() {
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Code: ";
        cin >> code;
        cin.ignore();
        cout << "Enter Designation: ";
        getline(cin, designation);
        
        double bp;
        cout << "Enter Basic Pay: ";
        cin >> bp;
        cin.ignore();
        
        sal.calculateSalary(bp);
    }

    void displayData() {
        cout << "\n--- Employee Payslip (Nested Class) ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Pay: " << sal.basicPay << endl;
        cout << "TA (10%): " << sal.ta << endl;
        cout << "DA (12%): " << sal.da << endl;
        cout << "HRA (20%): " << sal.hra << endl;
        cout << "Total Net Pay: " << sal.netPay << endl;
    }
};

int main() {
    Employee emp;
    emp.inputData();
    emp.displayData();
    return 0;
}
