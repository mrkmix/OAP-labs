#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	double z;
	cout << "Введите а" << endl;
	cin >> a;

	z = (cos(3.0 / 8.0 * 3.14 - a / 4.0) * cos(3.0 / 8.0 * 3.14 - a / 4.0)) - cos(11.0 / 8.0 * 3.14 + a / 4.0) * cos(11.0 / 8.0 * 3.14 + a / 4.0);

	cout << z;

	return 0;

}