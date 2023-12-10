#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	srand(time(NULL));
	int a = rand() % 1000;
	cout << "Количество пропусков лекций Максима: " << a;
	return 0;

}