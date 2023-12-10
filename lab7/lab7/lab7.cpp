#include <iostream>
using namespace std;
int main() {
	double x, z, y, a;
	double j[4] = { 6,-8.2,15.4,2 };
	y = 2.7;
	a = -5.5E-4;
	for (int i = 0; i < 5; i++) {
		x = pow(cos(y), 2) / (j[i] +2*a*y);

		if (x >= sqrt(y))
			z = exp(-j[i]);
	

		if (x < sqrt(y))
			z = pow((0.5 * y) / j[i], 2);

		cout << "z= " << z << endl;

	}
}