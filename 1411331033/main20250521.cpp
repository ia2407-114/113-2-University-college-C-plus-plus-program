#include <iostream>
#include <string>
using namespace std;


int main()
{
	string a;
	cout << "請輸入電話號碼" << endl;
	cin >> a;
	cout << "你輸入的電話號碼為:" << a.substr(0, 4) << "-" << a.substr(4, 3) << "-" << a.substr(7, 9) << endl;
	return 0;
}
