#include <iostream>
#include <string>
#include "Pet20250514.h"
using namespace std;

int main()
{
	unsigned int a;
	cout << "�аݭn��J�h���d��:";
	cin >> a;
	while (a)
	{
		try
		{
			string Pet_Type;
			string Pet_Name;
			Date B;
			Date A;
			Pet manager;
			unsigned int Birthday_Month;
			unsigned int Birthday_Day;
			unsigned int Birthday_Year;
			unsigned int Adoption_Month;
			unsigned int Adoption_Day;
			unsigned int Adoption_Year;
			cout << endl;
			cout << "�п�J�d��������:";
			cin >> Pet_Type;
			cout << "�п�J�d�����W��:";
			cin >> Pet_Name;
			cout << "�п�J�d�����ͤ�(��/��/�~):" << endl;
			cin >> Birthday_Month >> Birthday_Day >> Birthday_Year;
			cout << "�п�J�d������i��(��/��/�~):" << endl;
			cin >> Adoption_Month >> Adoption_Day >> Adoption_Year;
			B.setMonth(Birthday_Month).setDay(Birthday_Day).setYear(Birthday_Year);
			A.setMonth(Adoption_Month).setDay(Adoption_Day).setYear(Adoption_Year);
			manager.setFirst(Pet_Type).setLast(Pet_Name).setbirthDate(B).sethireDate(A);
			
		}
		catch (invalid_argument& e)
		{
			cout << "\n\n���~�T���G" << e.what() << endl;
			break;
		}
		a--;
	};

}
/*
* 4
*
* �]��
* dog1
* 12 30 2012
* 6 20 2013
*
* �ļ��C
* dog2
* 5 20 2011
* 11 11 2011
* (�~�@��)
*
* �䪪
* dog3
* 1 2 2011
* 1 11 2011
* (�~�@�� ��@��)
*
* �N����
* dog4
* 2 5 2012
* 2 6 2011
* (�ͤ�j���i��)
*/
