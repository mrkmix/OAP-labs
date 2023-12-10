#include <iostream>
#include <algorithm>
using namespace std;
void third() {
	double x[] = { 1,6.7,4,6,17 }, y = 0, min = x[0];
	for (int i = 0; i < 5; i++) {
		if (x[i] < min) {
			x[i] = min;
		}

		
		}
	
	
	for (int i = 0; i < 5; i++) {
		y += pow(x[i], 2);
	}
	cout << "y= " << y+min+2 << endl;




}
void second() {
	double d,c = 0.7,sum1=0,sum2=0;
	double a[] = {3, 12, -4, 6, 2, 3, 0.4}, b[] = { 19,1,-24,4,2,8 };
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 6; k++) {
			sum1 += a[i] - c;
			sum2 += pow((b[k] - 1), 2);
		}
	}
	d = sum1 - sum2;
	cout << "d=" << d << endl;


}
int main() {
	double q=1,y[] = { 6,8,0.9,0.2,4 };
	double max = y[0];
	for (int i = 0; i < 5; i++) {
		if (y[i] > max) {
			y[i] = max;
		}
	}
	
	for (int i = 0; i < 5; i++) {
		q*=(y[i] + 2*max);
		}
	cout << q << endl;
	second();
	third();
}
