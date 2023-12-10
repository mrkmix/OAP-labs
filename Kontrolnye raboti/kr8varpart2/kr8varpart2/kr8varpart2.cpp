#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double z;
	double t[] = { 9,4,2 }, x[] = { 0.6,23,5,0.8,4 };
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			if (t[i] > x[k])
				z = pow(sin(t[i]), 2);

			if (t[i] < x[k])
				z = 4 * (t[i] + x[k]);

			if (t[i] == x[k])
				z = 1 - exp(x[i] - 2);

			cout << "z= " << z << endl;
		}
	}
}