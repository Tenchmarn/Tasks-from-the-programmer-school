#include <iostream>
using namespace std;
void main() {
	int e_1;
	cin >> e_1;
	if (e_1 == 5) {
		cout << 25;
	}
	else {
		e_1 /= 10;
		e_1 *= e_1 + 1;
		cout << e_1 << 25 << endl;
	}
}