#include <iostream>
using namespace std;



void second(double a, double b, double z) {
	double y;
	double m[] = { 7.3,-2,0.8 }, j[] = { 0.3,1,0.7,4 };
	for (int i = 0; i < 3; i++) {
		for (int k=0; k < 4; k++) {
			y = (m[i] * j[k]) / (tan(a) - exp(10 * m[i]));
			cout << y << endl;
			z = 2 * y * b + sqrt(a + b);
			cout << z << endl;
		}
	}
}
int main() {
	double y, z, b, m, a;
	b = 2.5;
	m = 3;
	a = 1.4E-3;
	double j[] = { 0.7,-2,2.9 };
	for (int i = 0; i < 3; i++) {
		y = (m * j[i]) / (tan(a) - exp(10 * m));
		z = 2 * y * b + sqrt(a + b);
		cout << y << "   ";
		cout << z << endl;
	}
	cout << endl << endl;
	second(a, b, z);
}