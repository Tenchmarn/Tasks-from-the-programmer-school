#include <iostream>
using namespace std;
int main() {
	int a_1, a_2, SUM_a1, SUM_a2;
	SUM_a1 = SUM_a2 = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a_1 >> a_2;
		SUM_a1 += a_1;
		SUM_a2 += a_2;
	}
	if (SUM_a1 < SUM_a2) cout << "2";
	if (SUM_a2 < SUM_a1) cout << "1";
	if (SUM_a1 == SUM_a2) cout << "DRAW";
	return 0;
}