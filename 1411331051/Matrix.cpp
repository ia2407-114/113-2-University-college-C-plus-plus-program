#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int **element;

    // Constructor
    Matrix(int m, int n) {
        row = m;
        column = n;

        element = new int*[m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // Overload of unary prefix ++ operator: increment all elements by 1
    Matrix operator++() {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j]++;
        return *this;
    }

    // Display matrix contents
    void print() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << "\t";
            cout << endl;
        }
    }
};

int main() {
    int row, column;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;

    Matrix a(row, column);

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }

    cout << "\nMatrix before incrementing:" << endl;
    a.print();

    ++a;  // Use prefix increment

    cout << "\nMatrix after incrementing:" << endl;
    a.print();

    return 0;
}
