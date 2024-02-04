#include <iostream>
using namespace std;
int main() {
	int r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	if ((r1 < r2) && (r1 < r3)) {
		if (r2 < r3) {
			cout << r3 - r1;
		}
		else {
			cout << r2 - r1;
		}
	}
	if ((r1 > r2) && (r1 > r3)) {
		if (r2 > r3) {
			cout << r1 - r3;
		}
		else {
			cout << r1 - r2;
		}
	}

	return 0;
}