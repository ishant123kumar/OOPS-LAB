#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes;
public:
    void input() {
        cout << "Enter hours and minutes: ";
        cin >> hours >> minutes;
    }
    void display() {
        cout << hours << " hours and " << minutes << " minutes." << endl;
    }
    friend Time addTime(Time, Time);
};

Time addTime(Time t1, Time t2) {
    Time temp;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = t1.hours + t2.hours + (temp.minutes / 60);
    temp.minutes = temp.minutes % 60;
    return temp;
}

int main() {
    Time t1, t2, t3;
    cout << "Enter Time 1:" << endl;
    t1.input();
    cout << "Enter Time 2:" << endl;
    t2.input();
    
    t3 = addTime(t1, t2);
    cout << "Total Time = ";
    t3.display();
    return 0;
}
