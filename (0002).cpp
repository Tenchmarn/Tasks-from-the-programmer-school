#include <iostream>
using namespace std;
int Fun_ts(int e_1) {
	int r = 0;
	for (int i = 0; i <= e_1; i++) r += i;
	return r;
}
void main() {
	int e_1;
	cin >> e_1;
	cout << Fun_ts(e_1) << endl;
}