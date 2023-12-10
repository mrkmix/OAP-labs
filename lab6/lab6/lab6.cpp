#include <iostream>
using namespace std;
int main() {
	double y,z,b,a,j,m;
	m = 3;
	b = 2.5;
	a = 1.4E-3;
	j = 2.5;

	while (j < 3.1)
	{
		y = (m * j) / (tan(a) - exp(10 * m));
		z = (2*y*b) + sqrt(a + b);
		cout << y << endl;
		cout << z << endl;
		j = j + 0.1;
	}


}