#include <stdio.h>
      
struct studentData {
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
};

int main(void)
{
    FILE* cfPtr = NULL;  // ���V accounts.dat �ɮת��ɮ׫���

    // ���ն}���ɮסA�p�G�L�k�}�ҫh��ܿ��~�T���ðh�X�{��
    if (fopen_s(&cfPtr, "accounts.dat", "rb+")) { // �ˬd fopen_s ��^�����~�X
        puts("�ɮ׵L�k�}�ҡC");
        return 1; // �h�X�{��
    }
    else {
        // ��ܸ�Ƽ��D
        printf("%-6s%-20s%-10s%-12s%-10s\n", "ID", "Name", "Math", "Comput", "AVG");

        // Ū��������ɮפ����Ҧ��ǥ͸��
        struct studentData stu;
        while (fread(&stu, sizeof(struct studentData), 1, cfPtr) == 1) {
            // ���L�Ǹ��� 0 ���O��
            if (stu.ID != 0) {
                printf("%-6d%-20s%-10d%-12d%-10.2f\n",
                    stu.ID, stu.name, stu.math, stu.comput, stu.AVG);
            }
        }

        fclose(cfPtr); // �����ɮ�
    }

    return 0;
}
