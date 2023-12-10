#include <iostream>
#include <string>
using namespace std;

int searchCount(int size, string str) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (str[i] >= '0' && str[i] <= '9') count++;
    }
    return count;
}

void deleteOdd(string& str) {
    string newStr = "";
    for (int i = 0; i < str.size(); i++) {
        if ((str[i] - '0') % 2 == 0 || str[i] < '0' || str[i] > '9') {
            newStr += str[i];
        }
    }
    str = newStr;
}

int main() {
    setlocale(0, "");
    string str;
    cout << "Введите строку" << endl;
    getline(cin, str);
    cout << "Количество цифр в строке: " << searchCount(str.size(), str) << endl;
    cout << "Удаление нечетных цифр" << endl;
    deleteOdd(str);
    cout << str << endl;
    cout << "Повторный подсчет цифр: " << searchCount(str.size(), str) << endl;
    return 0;
}
