#include <iostream>
#include <string>
#include "Pet.h"
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
			Date Birth;
			Date Adopt;
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
			Birth.setMonth(Birthday_Month).setDay(Birthday_Day).setYear(Birthday_Year);
			Adopt.setMonth(Adoption_Month).setDay(Adoption_Day).setYear(Adoption_Year);
			Pet manager(Pet_Type, Pet_Name, Birth, Adopt);
		}
		catch (invalid_argument& e)
		{
			cout << "\n\n���~�T���G" << e.what() << endl;
			break;
		}
		a--;
	};

}