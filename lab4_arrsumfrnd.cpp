#include <iostream>
using namespace std;

class ArrayHandler {
private:
    int *arr;
    int size;
public:
    // Constructor allocates memory and takes input
    ArrayHandler(int s) {
        size = s;
        arr = new int[size];
        cout << "Enter " << size << " array elements: ";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    
    // Destructor to free dynamically allocated memory
    ~ArrayHandler() {
        delete[] arr;
    }
    
    friend int calculateSum(ArrayHandler *ptr);
};

// Friend function accepting an object pointer
int calculateSum(ArrayHandler *ptr) {
    int sum = 0;
    for(int i = 0; i < ptr->size; i++) {
        sum += ptr->arr[i]; // accessing private data via pointer
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    // Creating object pointer
    ArrayHandler *objPtr = new ArrayHandler(n);
    
    // Passing pointer to friend function
    int totalSum = calculateSum(objPtr);
    cout << "Sum of all elements = " << totalSum << endl;
    
    delete objPtr;
    return 0;
}
