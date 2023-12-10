#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int size,number=0,sum=0;
	cout << "Введите размер массива" << endl;
	cin >> size;
	int* A=new int[size];
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < size; i++) {
		cin >> A[i];
	}
	cout << "Исходный массив и поиск последнего положительного элемента" << endl;
	for (int i = 0; i < size; i++) {
		if (A[i] > 0) number = i;
		cout << A[i] << ' ';
	}
	for (int i = 0; i < number; i++) {
		sum += A[i];
	}
	cout << " \nСумма элементов до последнего положительного элемента: " << sum << endl;
	delete[] A;
	return 0;
}