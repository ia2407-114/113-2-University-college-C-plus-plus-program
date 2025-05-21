// Fig. 15.5: fig15_05.cpp week4
// Comparing pass-by-value and pass-by-reference with references.
#include <iostream>
using namespace std;

int x, y, z;
int area(int);
double area(int, int);
double area(int, int, int);


int main() {
	cout << "輸入一個正數" << endl;
	cin >> x;
	cout << "正方體面積:" << area(x);
	cout << "\n輸入二個正數" << endl;
	cin >> x >> y;
	cout << "圓柱體面積:" << area(x, y);
	cout << "\n輸入三個正數" << endl;
	cin >> x >> y >> z;
	cout << "長方體面積:" << area(x, y, z);

	cout << "\n結束" << endl;
}

int area(int x) {
	return x * x * x;
}

double area(int x, int y) {
	return x * x * 3.1415926 * y;
}
double area(int x, int y, int z) {
	return x * y * z;
}
