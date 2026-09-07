#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];
public:
    void input() {
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                cin >> mat[i][j];
    }
    void display() {
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
    friend Matrix addMatrix(Matrix, Matrix);
};

Matrix addMatrix(Matrix m1, Matrix m2) {
    Matrix temp;
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            temp.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
    return temp;
}

int main() {
    Matrix m1, m2, m3;
    cout << "Enter elements for 2x2 Matrix 1:" << endl;
    m1.input();
    cout << "Enter elements for 2x2 Matrix 2:" << endl;
    m2.input();
    
    m3 = addMatrix(m1, m2);
    cout << "Resultant Matrix:" << endl;
    m3.display();
    return 0;
}
