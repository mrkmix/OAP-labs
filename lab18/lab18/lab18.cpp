#include <iostream>
#include <ctime>
using namespace std;
int oddsum(int* array,int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 == 1) sum += array[i];
	}
	return sum;

}
int searchrow(int** A, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (A[i][j] > 0) {
				return i;
			}
		}
	}
	return -1;
}
void switchsigns(int** A, int rows, int cols, int number) {
	if (number > 0) { 
			for (int j = 0; j < cols; j++) {
				A[number - 1][j] *= -1;
			}
		}
	
}

int main(){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
		int size;
		cout << "Введите размер массива" << endl;
		cin >> size;
		int* array = new int[size];
		for (int i = 0; i < size; i++) {
			array[i] = rand() % 200;
			cout << array[i] << ' ';
		}
		cout << "\nСумма нечетных элементов массива: " << oddsum(array, size) << endl;
		delete[] array;

		int rows;
		int cols;
		cout << "Введите количество строк: ";
			cin >> rows;
			cout << "Введите количество столбцов: ";
			cin >> cols;
		int **A = new int*[rows];
		for (int i = 0; i < rows; i++) {
			A[i] = new int[cols];
		}
		cout << "Введите элементы массива" << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cin >> A[i][j];
			
			}
		}
		cout << "Введенный массив" << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << A[i][j] << ' ';
			}
			cout << "\n";
		}

		int number = searchrow(A, rows, cols);
		if (number < 0) cout << "В матрице нет положительных элементов" << endl;
		cout << "Номер строки, содержащий в себе хотя бы один положительный элемент: " << number+1 << endl;
		cout << "Измененный массив: " << endl;
		switchsigns(A, rows, cols,number);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << A[i][j] << ' ';
			}
			cout << "\n";
		}

		for (int i = 0; i < rows; ++i)
			delete[] A[i];
		delete[] A;
	
	return 0;
}