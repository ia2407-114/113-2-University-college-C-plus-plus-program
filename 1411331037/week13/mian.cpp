#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

int main()
{
	unsigned int a;
	cout << "請問要輸入多少寵物:";
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
			cout << "請輸入寵物的種類:";
			cin >> Pet_Type;
			cout << "請輸入寵物的名稱:";
			cin >> Pet_Name;
			cout << "請輸入寵物的生日(月/日/年):" << endl;
			cin >> Birthday_Month >> Birthday_Day >> Birthday_Year;
			cout << "請輸入寵物的領養日(月/日/年):" << endl;
			cin >> Adoption_Month >> Adoption_Day >> Adoption_Year;
			Birth.setMonth(Birthday_Month).setDay(Birthday_Day).setYear(Birthday_Year);
			Adopt.setMonth(Adoption_Month).setDay(Adoption_Day).setYear(Adoption_Year);
			Pet manager(Pet_Type, Pet_Name, Birth, Adopt);
		}
		catch (invalid_argument& e)
		{
			cout << "\n\n錯誤訊息：" << e.what() << endl;
			break;
		}
		a--;
	};

}