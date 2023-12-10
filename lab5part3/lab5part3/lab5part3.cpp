#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	
	int k;
	
	cout << "Нравится ли вам учится в БГТУ? (1 - Да, 2 - Нет)" << endl;
	cin >> k;
	switch (k) {
	case 1: cout << "Поздравляем"; break;
	case 2: cout << "Неправильный ответ"; break;
	default: cout << "Введена некорректная цифра ответа"; break;


	}
}