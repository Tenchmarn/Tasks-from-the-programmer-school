#include <iostream>
using namespace std;
int main() {
	int year;
	cin >> year;
	if ((year % 400 == 0) || ((year % 4 == 0) && (year%100!=0))) {
		cout << "12/09/";
	} else {
		cout << "13/09/";
	}
	if (year < 10) cout << 0;
	if (year < 100) cout << 0;
	if (year < 1000) cout << 0;
	cout << year;
	return 0;
}