#include <iostream>
#include <ctime>
using namespace std;
void main() {
	setlocale(0, "");
	const int n = 3; const int m = 3;
	int a[n][m],countOfElements=0;
	double count = n * m, sum=0;
	double sr;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 10;
			cout << a[i][j] << ' ';
			sum += a[i][j];
		}
		cout << endl;
	}
	// 1 Задание:
	sr = sum / count;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > sr) countOfElements++;
		}
		}

	cout << "\n Количество элементов больших, чем среднее арифметическое: " << countOfElements << endl;
	//2 Задание:
	bool status;
	int countLine=0;
	int countElem;
	for (int i = 0; i < n; i++) {
		status = true;
		for (int j = 0; j < m; j++) {
			for (int k = j; k >= 0; k--) {
				if (*(*(a+i)+k) > *(*(a+i)+j)) status = false;
			}
			for (int k = j; k <= j; k++) {
				if (a[i][k] < a[i][j]) status = false;
			}
		}
		if (status) {
			countLine++;

			cout << "\n Строка " << i + 1 << " подходит под условие задачи" << endl;
		}
	}
	countElem = countLine * (m - 2);
	cout << "\n Количество элементов,удовлетворяющих условию задачи: " << countElem;
	
}