#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	char string[100], symbol;
	cout << "Введите строку" << endl;
	gets_s(string);
	int count=0, size=strlen(string);
	cout << "Введите символ для поиска" << endl;
	cin >> symbol;
	for (int i = 0; i<=size;i++) {
		if (string[i] == symbol) {
			count++;
		}
	}
	cout << "Символ встречается в строке " << count << " раз(а)" << endl;
	return 0;
}