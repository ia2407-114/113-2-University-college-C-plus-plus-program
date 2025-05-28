#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    // �غc�l�G��l�Ưx�}�j�p�ä��t�O����
    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }
    }

    // �w�q�x�}���u-�v(�t��)�e�m�B��l���h��
    Matrix operator-() {
        Matrix temp(row, column);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                temp.element[i][j] = -(this->element[i][j]);
        return temp;
    }

    // �w�q�@���B��l�u++�v�N�x�}���C�Ӥ����[1
    Matrix operator++() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                element[i][j]++; // �C�Ӥ������W1
            }
        }
        return *this; // ��^�ק�᪺�x�}
    }

    // ��ܯx�}
    void display() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << element[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    int i, j, row, column;
    cout << "�п�J�x�}A���C��(row): ";
    cin >> row;
    cout << "�п�J�x�}A�����(column): ";
    cin >> column;

    Matrix a(row, column);
    cout << "�п�J�@��" << row << "x" << column << "���x�}A�G" << endl;

    // ��J�x�}A������
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }
    }

    // ��ܭ�l�x�}
    cout << "\n��l�x�}A�G" << endl;
    a.display();

    // �ϥΤ@���B��l++�N�x�}�����C�ӳ��[1
    ++a; // ���W�x�}���C�Ӥ���

    // ��ܻ��W�᪺�x�}
    cout << "\n���W�᪺�x�}A�G" << endl;
    a.display();

    return 0;
}
