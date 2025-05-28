#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    // ��l�Ưx�}�ä��t�O����
    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }
    }

    // �a�W�r���غc�l�A�ÿ�J�x�}����
    Matrix(char name, int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }

        cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                cout << name << '[' << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }

    // �w�q�x�}�[�k�B��l+
    Matrix operator+(Matrix x) {
        Matrix temp(this->row, this->column);
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] + x.element[i][j];
        return temp;
    }

    // �w�q�x�}�[�k�B��l+=
    Matrix operator+=(Matrix x) {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] += x.element[i][j];
        return *this;  // ��^�ק�᪺�x�}
    }

    // �w�q�x�}���k�B��l*=
    Matrix operator*=(Matrix x) {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] *= x.element[i][j];  // �C�Ӥ���������m�ۭ�
        return *this;  // ��^�ק�᪺�x�}
    }

    // �w�q�x�}��k�B��l-=
    Matrix operator-=(Matrix x) {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] -= x.element[i][j];  // �C�Ӥ���������m�۴�
        return *this;  // ��^�ק�᪺�x�}
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
    cout << "�п�J�x�}A�MB����C�ơG\n";
    cout << "�C��(row): ";
    cin >> row;
    cout << "���(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    // ��ܭ�x�}A�MB
    cout << "\n��x�}A�G" << endl;
    a.display();
    cout << "\n��x�}B�G" << endl;
    b.display();

    // �x�}A�MB�����[�B��
    Matrix c = a + b;
    cout << "\n�x�}A + �x�}B = " << endl;
    c.display();

    // ���[�B��+=
    cout << "\n����x�}A += �x�}B��G" << endl;
    a += b;
    a.display();

    // �����B��*=
    cout << "\n����x�}A *= �x�}B��G" << endl;
    a *= b;
    a.display();

    // ����B��-=
    cout << "\n����x�}A -= �x�}B��G" << endl;
    a -= b;
    a.display();

    return 0;
}