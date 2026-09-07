#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double radius;
    
    // Step 1: Input the radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Step 2: Calculate Area and Circumference
    double area = M_PI * radius * radius;
    double circumference = 2 * M_PI * radius;
    
    // Step 3: Display the results
    cout << fixed << setprecision(2);
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    
    return 0;
}
