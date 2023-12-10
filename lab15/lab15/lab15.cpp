#include <iostream>
using namespace std;
void second() {
    int size,count=0;
    cout << "Задание 2" << endl;
    cout << "\nВведите размер массива : ";
    cin >> size;

    double* array = new double[size];

    for (int i = 0; i < size; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> array[i];
    }
 
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            swap(array[i], array[count]);
            count++;
        }
    }

    cout << "Массив после преобразования:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }

    delete[] array;
}
 
    



void main() {
    setlocale(0, "");
    int size, firstNegative = -1, secondNegative = -1, min=0;
    double sum = 0;
    cout << "Задание 1" << endl;

    cout << "Введите размер массива: ";
    cin >> size;

    double* array = (double*)malloc(size * sizeof(double));

    for (int i = 0; i < size; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }

    for (int i = 0; i < size; i++) {
        if (array[min] > array[i]) {
            min = i;
        }
    }
    cout << "Индекс минимального элемента массива: " << min << endl;

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            if (firstNegative == -1) {
                firstNegative = i;
            }
            else if (secondNegative == -1) {
                secondNegative = i;
                break;
            }
        }
    }

    if (firstNegative != -1 && secondNegative != -1) {
        for (int i = firstNegative + 1; i < secondNegative; i++) {
            sum += array[i];
        }
        cout << "Сумма элементов между двумя первыми отрицательными элементами: " << sum << endl;
    }
    else {
        cout << "В массиве нет двух отрицательных чисел." << endl;
    }

    free(array);
    second();
}
