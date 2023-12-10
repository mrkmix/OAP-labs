#include <iomanip> 
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	char c, probel;
	
	probel = ' ';
	cout << "Введите символ "; cin >> c;

	system("cls");

	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;
	cout << setw(80) << setfill(probel) << probel << endl;

	cout << setw(50) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;

	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;

	cout << setw(47) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;

	return 0;



 
}
