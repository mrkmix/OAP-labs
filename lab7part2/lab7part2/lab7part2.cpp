#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n, a, b;
	
	cout << "Введите число а:" << endl;
	cin >> a;

	cout << "Введите число b:" << endl;
	cin >> b;

	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << "НОД равен " << i << endl;
			break;
		}
	}
	return 0;
}