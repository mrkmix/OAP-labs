#include <iostream>
#include <cstdarg>
using namespace std;

int mn(int n, ...) {
    va_list args;
    va_start(args, n);
    int max = va_arg(args, int);
    for (int i = 1; i < n; i++) {
        int num = va_arg(args, int);
        if (num > max) max = num;
    }
    va_end(args);
    return max;
}

double f1(double x) {
    return pow(x, 3) + 2 * x - 1;
}

double f2(double x) {
    return exp(x) - 2;
}

double dichotomy(double (*f)(double), double a, double b, double e) {
    double c;
    while ((b - a) / 2 > e) {
        c = (a + b) / 2;
        if ((*f)(c) == 0.0)
            break;
        else if ((*f)(a) * (*f)(c) < 0)
            b = c;
        else
            a = c;
    }
    return (a + b) / 2;
}
int main() {
    
    setlocale(0, "");
    // 1 Задание: 
    cout << "Максимальное число: " << mn(5, 3, 7, 9, 0, 2) << endl;

    // 2 Задание: 
    
    double a1, b1, a2, b2;
    cout << "Введите интервал для первого уравнения (a1, b1): ";
    cin >> a1 >> b1;
    cout << "Введите интервал для второго уравнения (a2, b2): ";
    cin >> a2 >> b2;

    double root1 = dichotomy(f1, a1, b1, 0.001);
    double root2 = dichotomy(f2, a2, b2, 0.001);

    cout << "Корень первого уравнения: " << root1 << endl;
    cout << "Корень второго уравнения: " << root2 << endl;

    return 0;
}
