#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;      // �x�}����ƻP�C��
    int** element;        // ���V�G���}�C�����СA�s��x�}����

    // �غc�l�G�ΨӰʺA�t�m row x column ���G���}�C
    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new int* [row];      // �t�m row �ӫ��СA���V�C�@�C
        for (int i = 0; i < row; i++)
            element[i] = new int[column];  // �C�C�t�m column �� int �Ŷ�
    }

    // �ƻs�غc�l�G�ΨӲ`�����t�@�ӯx�}����
    Matrix(const Matrix& other) {
        row = other.row;
        column = other.column;
        element = new int* [row];       // �t�m�s�O����
        for (int i = 0; i < row; i++) {
            element[i] = new int[column];
            for (int j = 0; j < column; j++)
                element[i][j] = other.element[i][j];  // �ƻs������
        }
    }

    // ��ȹB��l�����G�Ψ�������ॿ�T�Q��ȡ]�`�����^
    Matrix& operator=(const Matrix& other) {
        if (this == &other) return *this;  // ����۽��

        // ������ۤv�w�����ʺA�O����
        for (int i = 0; i < row; i++)
            delete[] element[i];
        delete[] element;

        // ���s�t�m�O����A�ýƻs���
        row = other.row;
        column = other.column;
        element = new int* [row];
        for (int i = 0; i < row; i++) {
            element[i] = new int[column];
            for (int j = 0; j < column; j++)
                element[i][j] = other.element[i][j];
        }
        return *this;  // �^�Ǧۤv�A����s����
    }

    // �Ѻc�l�G����ʺA�t�m���O����A�קK�O���鬪�|
    ~Matrix() {
        for (int i = 0; i < row; i++)
            delete[] element[i];  // ����C�@�C���Ŷ�
        delete[] element;         // ����s��C���Ъ��}�C
    }

    // *= �B��l�����A�v���������]���H�t�@�x�}�����������^
    Matrix& operator*=(const Matrix& other) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] *= other.element[i][j];
        return *this;  // ����s��B��
    }

    // += �B��l�����A�v�������[
    Matrix& operator+=(const Matrix& other) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] += other.element[i][j];
        return *this;
    }

    // -= �B��l�����A�v��������
    Matrix& operator-=(const Matrix& other) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] -= other.element[i][j];
        return *this;
    }

    // �L�X�x�}���e�A�榡�ƿ�X
    void print() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << "\t";  // �������� tab �j�}
            cout << endl;  // �C�C����
        }
    }
};
