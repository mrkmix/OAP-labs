#include <iostream>
using namespace std;
void third() // метод Дихотомии
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x = 0, a = 1, b = 2;

	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((exp(x) - 3 - 1 / x) * (exp(a) - 3 - 1 / a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}

	cout << "x = " << x << endl;

}

void second() { // Метод параболл
	setlocale(LC_ALL, "RUS");
	int n = 200, i = 1;
	double h, x, s1 = 0, s2 = 0, z, a = 2, b = 3;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i; i < n; i++)
	{
		s2 += (exp(x)-1/x);
		x += h;
		s1 += (exp(x)- 1/x);
		x += h;
	}
	z = (h / 3) * ((exp(a) - 1/a) + (4 * (exp(a+h)-1/(a+h)) + (4 * s1) + (2 * s2) + (exp(b)-1/b)));
	cout << "z = " << z << endl;
	
}
int main() { //Метод трапеций
	setlocale(LC_ALL, "rus");
	double h, x, s = 0, a = 2, b = 3, n = 200;
	h = (b - a) / n;
	x = a;
	for (;x < b - h; x += h)
	{
		s = s + h * ((exp(x)-1/x) + (exp(x)-1/x + h)) / 2;
	}
	cout << "s = " << s << endl;
	
	second();
	third();
}
