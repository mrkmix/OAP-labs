#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a,b,c,k;
	k = 0;
	cout << "Введите число а" << endl;
	cin >> a;
	cout << "Введите число b" << endl;
	cin >> b;
	cout << "Введите число с" << endl;
	cin >> c;
	
	if (a % 2 == 0)
		k = k + 1;
	if (b % 2 == 0)
		k = k + 1;
	if (c % 2 == 0)
		k = k + 1;
	if (k == 2)
		cout << "Среди заданных чисел есть два четных числа" << endl;
	else
		cout << "Среди заданных чисел нету двух четных чисел" << endl;

	return 0;

 
}
