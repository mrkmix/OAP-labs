#include <iostream> 
using namespace std;
void second() {
		int A;
		int p = 2;
		int n = 3;

		cout << "Введите число ";
		cin >> A;
		A = A | ((1 << n) - 1) << p;
		char buffer[33];
		_itoa_s(A, buffer, 2);
		std::cout << "Число после установки битов: " << buffer << std::endl;

}
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "Введите число";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 3) == 0)
		cout << "Число кратно 4" << endl;
	else
		cout << "Число не кратно 4" << "\n" << endl;

	second();

	
}
