#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    // �غc�l�A�ʺA�t�m�G���}�C
    Matrix(int m, int n) {
        row = m;
        column = n;

        // �t�mmxn���G���}�Celement���ʺA�O����
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }
    }

    // �Ѻc�l�A����ʺA�O����
    ~Matrix() {
        for (int i = 0; i < row; i++) {
            delete[] element[i];
        }
        delete[] element;
    }

    // ����++�B��šA���W�x�}�C�Ӥ�������
    Matrix& operator++() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                element[i][j]++;  // �C�Ӥ������W 1
            }
        }
        return *this;
    }

    // ��X�x�}
    void print() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << element[i][j] << "\t";
            }
            cout << endl;
        }
    }
};


