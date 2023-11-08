#include <iostream>
using namespace std;
int main() {
	int A_1;
	int max_T=0;
	//cin >> A_1 >> A_2 >> A_3;
	for (int i = 1; i <= 3; i++) {
		cin >> A_1;
		if (A_1 > max_T) {
			max_T = A_1;
		}
	}
	cout << max_T;
	return 0;
}