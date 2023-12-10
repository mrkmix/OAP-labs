#include <iostream>
using namespace std;
void main() {
	double sum=0,x = 3, a[] = { 3,-5,7,12};
	while (x < 5.2) {
		for (int i = 0; i < 4; i++) {
			sum += a[i] / x;

		}
		cout << sum << " ";
		x += 0.2;
	}




	}


