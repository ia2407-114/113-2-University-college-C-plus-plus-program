#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phoneNumber;

    // ���ܨϥΪ̿�J������X
    cout << "Enter a phone number (e.g., 0912345678): ";
    cin >> phoneNumber;

    // �ˬd��J���׬O�_�� 10 �Ӧr���]���t��X�^
    if (phoneNumber.length() == 10)
    {
        // �榡�ƨÿ�X�� 09xx-xxx-xxx �榡
        cout << "Formatted phone number: "
            << phoneNumber.substr(0, 4) << "-"
            << phoneNumber.substr(4, 3) << "-"
            << phoneNumber.substr(7) << endl;
    }
    else
    {
        // �Y��J���פ��ŦX�n�D�A��ܿ��~�T��
        cout << "Invalid phone number length. Please enter a 10-digit phone number." << endl;
    }

    return 0;
}
