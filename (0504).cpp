#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	char L_1 = 'V', L_2 = 'G', L_3 = 'C';
	a %= 3;
	if (a == 0) cout << "GCV";
	if (a == 1) cout << "VGC";
	if (a == 2) cout << "CVG";
	return 0;
}