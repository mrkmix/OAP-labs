#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double  g, sum =0;
	double k = 6;
	double a[] = { 2.3,7,-2,-4,9 };
	for (int i = 0; i < 5; i++) {
		for (int h = 1; h < 6;h++) {


			while (k < 7.2) {
				sum += a[i] / h;
				g = k / sum;
				cout << g << endl;
				k = k + 0.2;
			}
		}
	}
	
	return 0;
	
}