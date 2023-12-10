#include <iostream>
using namespace std;
void second(){
    char str[100];
    cin >> str;
    int count = strlen(str);

    for (int i =0; i < count; i++) {
        for (int j = i + 1; j <count; j++) {
            if (*(str+i) > *(str+j)) {
                swap(*(str+i),*(str+j));
            }
        }
    }

    cout << str;

    }
int main() {
	setlocale(LC_ALL, "rus");
    char s='b', t[20];
    int i, j, n;
    cout << "Input string: ";
    gets_s(t);
    n = strlen(t);
    for (i = 0; i <= n; i++)
        if (t[i] == s)
            for (j = i; j <= n; j++)
                t[i] = t[i + 1];
    for (i = 0; i < n; i++)
        cout << t[i];

   second();
}