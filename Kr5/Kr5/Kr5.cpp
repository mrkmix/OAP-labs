#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(0, "");
	int size,max=0;
	cout << "Введите размер массива: " << endl;
	cin >> size;
	srand(time(NULL));
	int *A = new int[size];
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 100;
		cout << A[i] << ' ';
	}
	for (int i = 0; i < size; i++) {
		if (A[i] % 2 == 0) {
			max = A[i];
		}
	}
	for (int i = 0; i < size; i++) {
		if (A[i] > max && A[i]%2==0) max = A[i];
	}
	cout << "\nМаксимальный элемент среди четных " << max << endl;
	delete[] A;
	return 0;
	
		
}