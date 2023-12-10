#include <iostream>
#include <string>
using namespace std;

int searchCount(int& size, string& str, int& count) {
    for (int i = 0; i < size; i++) {
        if (str[i] >= '0' && str[i] <= '9') count++;
    }
    return count;
}

void deleteOdd(string& str, int size) {
    string newStr = "";
    for (int i = 0; i < size; i++) {
        if ((str[i] - '0') % 2 == 0 || str[i] < '0' || str[i] > '9') {
            newStr += str[i];
        }
    }
    str = newStr;
    size = str.length();
}

int main() {
    setlocale(0, "");
    int count = 0;
    string str;
    cout << "Введите строку" << endl;
    getline(cin, str);
    int size = str.length();
    cout << "Количество цифр в строке: " << searchCount(size, str, count) << endl;
    cout << "Удаление нечетных цифр" << endl;
    deleteOdd(str, size);
    cout << str << endl;
    count = 0;
    cout << "Повторный подсчет цифр: " << searchCount(size, str, count) << endl;
    return 0;
}
