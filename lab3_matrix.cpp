#include <iostream>
using namespace std;

int main() {
    int mat[3][3];

    cout << "Enter elements for a 3x3 matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nUpper Triangle Matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) {
                cout << mat[i][j] << " ";
            } else {
                cout << "  "; // Print spaces for lower triangle elements
            }
        }
        cout << endl;
    }

    return 0;
}
