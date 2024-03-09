#include <iostream>
using namespace std;
int main() {
	int k, m, n;
	cin >> k;
	int* arr = new int[k];
	for (int i = 0; i < k; i++) {
		cin >> n >> m;
		arr[i] = 19 * m + (n + 239) * (n + 366) / 2;
	}
	cout << endl;
	for (int j = 0; j < k; j++) {
		cout << arr[j] << endl;
	}
	return 0;
}