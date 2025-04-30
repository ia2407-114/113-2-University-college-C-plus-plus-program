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
			Date birth(Birthday_Month, Birthday_Day, Birthday_Year);
			Date hire(Adoption_Month, Adoption_Day, Adoption_Year);
			Pet manager(Pet_Type, Pet_Name, birth, hire);
		}
		catch (invalid_argument& e)
		{
			cout << "\n\n錯誤訊息：" << e.what() << endl;
			break;
		}
		a--;
	};

}
/*
* 4
* 
* 財犬
* dog1
* 12 30 2012
* 6 20 2013
* 
* 薩摩耶
* dog2
* 5 20 2011
* 11 11 2011
* (年一樣)
* 
* 邊牧
* dog3
* 1 2 2011
* 1 11 2011
* (年一樣 月一樣)
* 
* 吉娃娃
* dog4
* 2 5 2012
* 2 6 2011
* (生日大於領養日)
*/
