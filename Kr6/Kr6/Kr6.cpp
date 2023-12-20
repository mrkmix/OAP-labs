#include <iostream>
using namespace std;

int minsearch(int* A, int* B) {
    int minAnotInB = 10001;
    for (int i = 0; i < 10; i++) {
        int j;  
        for (j = 0; j < 10; j++) {
            if (A[i] == B[j]) {
                break;
            }
        }
        if (j==10 && A[i] < minAnotInB) {
            minAnotInB = A[i];
        }
    }
    return minAnotInB;
}

int main() {
    setlocale(0, "");
    int A[10], B[10];
    cout << "Введите 10 элементов массива А: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    cout << "\nВведите 10 элементов массива B: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }
    cout << "\nМассив А: ";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << ' ';
    }
    cout << "\nМассив B: ";
    for (int i = 0; i < 10; i++) {
        cout << B[i] << ' ';
    }
    int minAnotInB = minsearch(A, B);
    if (minAnotInB == 10001) {
        cout << "\nВсе элементы массива А содержатся в массиве B.";
    }
    else {
        cout << "\nНаименьший элемент массива А, не входящий в массив B: " << minAnotInB;
    }
}
