#include <iostream>
#include <locale>
using namespace  std;

 int second(){
     char arr[] = "abc123def456";
     char digits[sizeof(arr)], nonDigits[sizeof(arr)];
     int dIndex = 0, ndIndex = 0;

     for (int i = 0; arr[i] != '\0'; i++) {
         if (arr[i] >= '0' && arr[i] <= '9') {
             digits[dIndex++] = arr[i];
         }
         else {
             nonDigits[ndIndex++] = arr[i];
         }
     }

     digits[dIndex] = '\0';
     nonDigits[ndIndex] = '\0';

     cout << "Цифры: " << digits << endl;
     cout << "Другие символы: " << nonDigits << endl;

     return 0;
}





int main() {
    setlocale(LC_ALL, "rus");
    const int maxSize = 99;
    int n, k;
    int a[maxSize];
    cout << "Введите размер массива (<99)" << endl;
    cin >> n;
    if (n > 99) {
        cout << "Неверное значение" << endl;
        return 0;
    }
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 99;
        cout << a[i] << " ";
    }

   

    cout << endl << "Введите номер элемента, который надо удалить" << endl;
    cin >> k;
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
   


    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            for (int j = n; j > i + 1; j--) {
                a[j] = a[j - 1];
            }
            a[i + 1] = 0;
            i++; // Пропустить добавленный 0
            n++; // Расширить размер массива
        }
    }
    cout << "Массив после удаления элемента и добавления нулей к четным элементам: ";
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    
    second();
    return 0;
}