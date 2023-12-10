#include <iostream>
using namespace std;


int main() 
{
	int m= 6;
	double x= 1.4;
	double z = 0.0000005;

	double y, w;

	y = pow(1 + x, 1.0 / 2.0) - cos(2 / m);
	w = 0.6 * z - 2 * exp( -2 * y * m);

	cout << y << endl;
	cout << w << endl;
	return 0;
}
