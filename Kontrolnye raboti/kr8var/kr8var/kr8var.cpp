#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	double z, t, x;
	t = 1.5;
	x = 1.9;
	while (t < 2.1) {
		if (t > x)
			z = pow(sin(t), 2);

		if (t < x)
			z = 4 * (t + x);
		
		if (t == x)
			z = 1 - exp(x - 2);
			cout << "z= " << z << endl;
			t = t + 0.1;
	}
}