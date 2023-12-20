#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int n, ...);

int main()
{
	cout << sum(6, 4, 5, 1, 2, 3, 0) << endl;
	cout << sum(2, 34, 4445) << endl;
	return 0;
}

int sum(int n, ...)
{
	va_list args;
	va_start(args, n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum;
}
